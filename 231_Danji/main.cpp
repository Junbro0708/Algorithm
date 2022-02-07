#include <iostream>
#include <cstring>
#include <queue>

/*
 * [231] 백준 단지 번호 붙이기
 */

using namespace std;

int N;
int D[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

void BFS(){
    bool Visited[N][N];
    memset(Visited, false, sizeof(Visited[N][N]));

    queue<pair<pair<int, int>, int>> myQueue;

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            if(B)
        }
    }
}

int main() {
    cin >> N;

    int Board[N][N];
    memset(Board, 0, sizeof(Board[N][N]));

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            scanf_s("%1d", &Board[i][j]);
        }
    }
    BFS();
    return 0;
}
