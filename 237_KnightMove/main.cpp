#include <iostream>
#include <queue>
#include <cstring>

/*
 * [237] 백준 7562번 나이트의 이동
 */

using namespace std;

#define MAXINT 300

int T, I;
bool Visited[MAXINT][MAXINT];
int D[8][2] = {{-2, -1},
               {-1, -2},
               {1, -2},
               {2, -1},
               {-2, 1},
               {-1, 2},
               {1, 2},
               {2, 1}};

void BFS(int ox, int oy, int dx, int dy){
    queue<pair<pair<int, int>, int>> myQueue;
    myQueue.push({{ox, oy}, 0});
    Visited[ox][oy] = true;

    while (!myQueue.empty()){
        int tx = myQueue.front().first.first;
        int ty = myQueue.front().first.second;
        int tCnt = myQueue.front().second;
        myQueue.pop();

        if(tx == dx && ty == dy){
            cout << tCnt << "\n";
            return;
        }

        for(int i = 0; i < 8; ++i){
            int nx = tx + D[i][0];
            int ny = ty + D[i][1];

            if(nx < 0 || ny < 0 || nx >= I || ny >= I) continue;
            if(Visited[nx][ny]) continue;
            myQueue.push({{nx, ny}, tCnt + 1});
            Visited[nx][ny] = true;
        }
    }
}

int main() {
    cin >> T;

    for(int i = 0; i < T; ++i){
        cin >> I;
        memset(Visited, false, sizeof(Visited));

        int o1, o2;
        cin >> o1 >> o2;
        int d1, d2;
        cin >> d1 >> d2;

        BFS(o1, o2, d1, d2);
    }
    return 0;
}
