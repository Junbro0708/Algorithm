#include <iostream>
#include <queue>
#include <cstring>

/*
 * [233] 백준 1012번 유기농 배추
 */

using namespace std;

#define MAX 50

int D[4][2] = {{-1, 0},
               {0, 1},
               {1, 0},
               {0, -1}};

int N, M, K;
int Board[MAX][MAX];
bool Visited[MAX][MAX];

void BFS(){
    int cnt = 0;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            if(Board[i][j] == 1 && !Visited[i][j]){
                queue<pair<int, int>> myQueue;
                myQueue.push({i, j});
                Visited[i][j] = true;
                cnt++;

                while(!myQueue.empty()){
                    auto t = myQueue.front();
                    myQueue.pop();

                    int tx = t.first; int ty = t.second;
                    for(int k = 0; k < 4; ++k){
                        int dx = tx + D[k][0];
                        int dy = ty + D[k][1];

                        if(dx < 0 || dy < 0 || dx >= N || dy >= M) continue;
                        if(Board[dx][dy] == 0) continue;
                        if(Visited[dx][dy]) continue;
                        myQueue.push({dx, dy});
                        Visited[dx][dy] = true;
                    }
                }
            }
        }
    }
    cout << cnt << "\n";
}

int main() {
    int T;
    cin >> T;
    for(int i = 0; i < T; ++i){
        cin >> N >> M >> K;
        memset(Board, 0, sizeof(Board));
        memset(Visited, false, sizeof(Visited));
        for(int j = 0; j < K; ++j){
            int temp1, temp2;
            cin >> temp1 >> temp2;
            Board[temp1][temp2] = 1;
        }
        BFS();
    }
    return 0;
}
