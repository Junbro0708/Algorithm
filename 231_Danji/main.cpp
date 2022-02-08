#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

/*
 * [231] 백준 단지 번호 붙이기
 */

using namespace std;

#define MAX 25

int N;
int Board[MAX][MAX];
bool Visited[MAX][MAX] = {false, };

int D[4][2] = {{-1, 0},
               {0, 1},
               {1, 0},
               {0, -1}};

void BFS(){
    queue<pair<pair<int, int>, int>> myQueue;
    vector<int> danji;
    int total = 0;

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            if(Board[i][j] == 1 && !Visited[i][j]){
                total++;

                int cnt = 0;
                myQueue.push({{i, j}, cnt});
                Visited[i][j] = true;

                while (!myQueue.empty()){
                    auto t = myQueue.front();
                    myQueue.pop();

                    auto tPos = t.first;
                    int tx = tPos.first; int ty = tPos.second;
                    cnt++;

                    for(int i = 0; i < 4; ++i){
                        int dx = tx + D[i][0];
                        int dy = ty + D[i][1];

                        if(dx < 0 || dy < 0 || dx >= N || dy >= N) continue;
                        if(Board[dx][dy] == 0) continue;
                        if(Visited[dx][dy]) continue;
                        myQueue.push({{dx, dy}, cnt});
                        Visited[dx][dy] = true;
                    }
                }
                danji.push_back(cnt);
            }
        }
    }
    cout << total << "\n";
    sort(danji.begin(), danji.end());
    for(int i = 0; i < danji.size(); ++i)
        cout << danji[i] << "\n";
}

int main() {
    cin >> N;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            scanf_s("%1d", &Board[i][j]);
        }
    }
    BFS();
    return 0;
}
