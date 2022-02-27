#include <iostream>
#include <vector>

/*
 * [238] 백준 15649 N과 M(1)
 */

using namespace std;

#define MAX 8

int N, M;
vector<int> Board;
bool check[MAX];

void DFS(int count){
    if(count == M){// 백트래킹은 종료 조건이 필요
        for(int i = 0; i < Board.size(); ++i){
            cout << Board[i] << " ";
        }
        cout << "\n";
        return;
    }else{
        for(int i = 1; i <= N; ++i){
            if(check[i]) continue; // 방문검사로 이미 간 곳은 패스
            check[i] = true;
            Board.push_back(i);
            DFS(count + 1);
            Board.pop_back();
            check[i] = false; // 빼면서 방문검사도 당연히 안 간 것으로
        }
    }
}

int main() {
    cin >> N >> M;
    DFS(0);
    return 0;
}
