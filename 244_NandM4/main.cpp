#include <iostream>
#include <vector>

/*
 * [244] 백준 15652번 N과 M (4)
 */

using namespace std;

int N, M;
vector<int> Board;

void DFS(int index, int num){
    if(index == M){
        for(int i = 0; i < M; ++i){
            cout << Board[i] << " ";
        }
        cout << "\n";
        return;
    }else{
        for(int i = num; i <= N; ++i){
            Board.push_back(i);
            DFS(index + 1, i);
            Board.pop_back();
        }
    }
}

int main() {
    cin >> N >> M;
    DFS(0, 1);
    return 0;
}
