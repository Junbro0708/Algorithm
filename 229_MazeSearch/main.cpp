#include <iostream>
#include <queue>

/*
 * [229] 백준 2178번 미로 탐색
 */

using namespace std;

int N, M;
int D[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

int Board[102][102];
bool Visited[102][102];

void BFS(){
    queue<pair<pair<int, int>, int>> myQueue;
    myQueue.push({{1, 1}, 1});
    Visited[1][1] = true;

    while (!myQueue.empty()){
        auto t = myQueue.front();
        myQueue.pop();

        auto tPos = t.first;
        int tx = tPos.first; int ty = tPos.second;
        int cnt = t.second;

        if(tx == N && ty == M){
            cout << cnt << "\n";
            break;
        }

        for(int i = 0; i < 4; ++i){
            int dx = tx + D[i][0];
            int dy = ty + D[i][1];

            if(dx <= 0 || dy <= 0 || dx > N || dy > M) continue;
            if(Visited[dx][dy]) continue;
            if(Board[dx][dy] == 0) continue;

            myQueue.push({{dx, dy}, cnt + 1});
            Visited[dx][dy] = true;
        }
    }
}

int main() {
    cin >> N >> M;
    for(int i = 1; i <= N; ++i){
        for(int j = 1; j <= M; ++j){
            scanf_s("%1d", &Board[i][j]);
        }
    }
    BFS();
    return 0;
}
