#include <iostream>
#include<vector>
#include <cstring>
#include <queue>

/*
 * [230] 프로그래머스 Level 2 게임 맵 최단 거리
 */

using namespace std;

int D[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

int solution(vector<vector<int>> Boards)
{
    int N = Boards.size(), M = Boards[0].size();
    bool Visited[N][M];
    memset(Visited, false, sizeof(Visited));

    queue<pair<pair<int, int>, int>> myQueue;
    myQueue.push({{0, 0}, 1});
    Visited[0][0] = true;

    while(!myQueue.empty()){
        auto t = myQueue.front();
        myQueue.pop();

        auto tPos = t.first;
        int tx = tPos.first; int ty = tPos.second;
        int cnt = t.second;

        if(tx == N-1 && ty == M-1){
            return cnt;
        }

        for(int i = 0; i < 4; ++i){
            int dx = tx + D[i][0];
            int dy = ty + D[i][1];

            if(dx < 0 || dy < 0 || dx >= N || dy >= M) continue;
            if(Visited[dx][dy]) continue;
            if(Boards[dx][dy] == 0) continue;

            myQueue.push({{dx, dy}, cnt + 1});
            Visited[dx][dy] = true;
        }
    }
    return -1;
}

int main() {
    cout << solution({{1,0,1,1,1}, {1,0,1,0,1}, {1,0,1,1,1}, {1,1,1,0,1}, {0,0,0,0,1}});
    return 0;
}
