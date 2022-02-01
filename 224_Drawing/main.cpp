#include <iostream>
#include <queue>

/*
 * [224] 백준 1926번 그림
 */

using namespace std;

#define MAX_N 500

struct Point{
   int row, col;
};

int D[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int N, M, Board[MAX_N][MAX_N];
int cnt = 0, area = 0, max_ = 0;

void BFS(){

    bool visited[MAX_N][MAX_N] = {false, };
    queue<Point> myQueue;

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            if(Board[i][j] && !visited[i][j]) {
                myQueue.push({i, j});
                visited[i][j] = true;
                cnt++;
            }

            while(!myQueue.empty()){
                Point curr = myQueue.front();
                myQueue.pop();

                area++;

                for(int i = 0; i < 4; ++i){
                    int nr = curr.row + D[i][0], nc = curr.col + D[i][1];
                    if(nr < 0 || nr > N -1 || nc < 0 || nc > M - 1) continue;
                    if(Board[nr][nc] == 0) continue;
                    if(visited[nr][nc]) continue;
                    myQueue.push({nr, nc});
                    visited[nr][nc] = true;
                }
            }
            if(max_ < area)
                max_ = area;
            area = 0;
        }
    }
}

int main() {
    cin >> N >> M;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            cin >> Board[i][j];
        }
    }

    BFS();
    cout << cnt << "\n" << max_;
    return 0;
}
