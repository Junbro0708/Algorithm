#include <iostream>
#include <queue>
#include <cstring>

/*
 * [234] 백준 7576번 토마토
 */

using namespace std;

#define MAX 1000

int M, N, result = 0;
int Board[MAX][MAX];
bool Visited[MAX][MAX];

int D[4][2] = {{-1, 0},
               {0, 1},
               {1, 0},
               {0, -1}};

void BFS(){
    queue<pair<int, int>> myQueue;

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            if(Board[i][j] == 1){
                myQueue.push({i, j});
                Visited[i][j] = true;
            }
        }
    }

    while(!myQueue.empty()){
        auto t = myQueue.front();
        int tx = t.first; int ty = t.second;
        myQueue.pop();

        for(int i = 0; i < 4; ++i){
            int dx = tx + D[i][0];
            int dy = ty + D[i][1];

            if(dx < 0 || dy < 0 || dx >= N || dy >= M) continue;
            if(Board[dx][dy] == -1) continue;
            if(Visited[dx][dy]) continue;
            myQueue.push({dx, dy});
            Visited[dx][dy] = true;
            Board[dx][dy] = Board[tx][ty] + 1;
        }
    }
}

int main() {
    cin >> M >> N;
    memset(Board, -1, sizeof(Board));
    memset(Visited, false, sizeof(Visited));

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            cin >> Board[i][j];
        }
    }
    BFS();
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            if(Board[i][j] == 0){
                result = 0;
                break;
            }else if(Board[i][j] > result){
                result = Board[i][j];
            }
        }
        if(result == 0) break;
    }
    cout << result - 1;
    return 0;
}
