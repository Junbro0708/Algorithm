#include <iostream>
#include <queue>
#include <cstring>

/*
 * [234] 백준 7569번 토마토
 */

using namespace std;

#define MAX 100

int M, N, H, result = 0;
int Board[MAX][MAX][MAX];
bool Visited[MAX][MAX][MAX];

int D[6][3] = {{-1, 0, 0},
               {0, 1, 0},
               {1, 0, 0},
               {0, -1, 0},
               {0, 0, 1},
               {0, 0, -1}};

void BFS(){
    queue<pair<pair<int, int>, int>> myQueue;

    for(int k = 0; k < H; ++k) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if (Board[i][j][k] == 1) {
                    myQueue.push({{i, j}, k});
                    Visited[i][j][k] = true;
                }
            }
        }
    }

    while(!myQueue.empty()){
        auto t = myQueue.front();
        int tx = t.first.first;
        int ty = t.first.second;
        int tz = t.second;
        myQueue.pop();

        for(int i = 0; i < 6; ++i){
            int dx = tx + D[i][0];
            int dy = ty + D[i][1];
            int dz = tz + D[i][2];

            if(dx < 0 || dy < 0 || dz < 0 || dx >= N || dy >= M || dz >= H) continue;
            if(Board[dx][dy][dz] == -1) continue;
            if(Visited[dx][dy][dz]) continue;
            myQueue.push({{dx, dy}, dz});
            Visited[dx][dy][dz] = true;
            Board[dx][dy][dz] = Board[tx][ty][tz] + 1;
        }
    }
}

int main() {
    cin >> M >> N >> H;
    memset(Board, -1, sizeof(Board));
    memset(Visited, false, sizeof(Visited));

    for (int k = 0; k < H; ++k){
        for (int i = 0; i < N; ++i){
            for (int j = 0; j < M; ++j){
                cin >> Board[i][j][k];
            }
        }
    }
    BFS();
    for(int k = 0; k < H; ++k) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if (Board[i][j][k] == 0) {
                    result = 0;
                    break;
                } else if (Board[i][j][k] > result) {
                    result = Board[i][j][k];
                }
            }
            if (result == 0) break;
        }
    }
    cout << result - 1;
    return 0;
}