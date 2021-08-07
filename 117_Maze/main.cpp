#include <iostream>
#include <stdio.h>
#include <queue>

/*
 * [117] 백준 2178번 미로 탐색
 */

using namespace std;

int N, M;
int di[4] = {-1, 0, 1, 0};
int dj[4] = {0, 1, 0, -1};
int map[102][102];
bool check[102][102];

void BFS(){
    queue<pair<pair<int, int>, int>> q;
    q.push({{1, 1}, 1});
    check[1][1] = true;

    while(!q.empty()){
        auto t = q.front();
        q.pop();
        auto tpos = t.first;
        int ti = tpos.first;
        int tj = tpos.second;
        int tcnt = t.second;

        if(ti == N && tj == M) {
            cout << tcnt << "\n";
            break;
        }

        for(int k = 0; k < 4; k++){
            int ni = ti + di[k];
            int nj = tj + dj[k];
            if(ni <= 0 || nj <= 0 || ni > N || nj > M || map[ni][nj] == 0 || check[ni][nj]) continue;
            else{
                q.push({{ni, nj}, tcnt + 1});
                check[ni][nj] = true;
            }
        }
    }
}

int main() {
    cin >> N >> M;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            scanf("%1d", &map[i][j]);
        }
    }
    BFS();
    return 0;
}
