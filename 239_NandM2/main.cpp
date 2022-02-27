#include <iostream>
#include <vector>

/*
 * [239] 백준 15650번 N과 M (2)
 */

using namespace std;

#define MAX 10

int N, M;
vector<int> Board;
bool check[MAX];

void DFS(int index, int num){
    if(index == M){
        for(int i = 0; i < Board.size(); ++i){
            cout << Board[i] << " ";
        }
        cout << "\n";
        return;
    }else{
        for(int j = num; j <= N; ++j){
            if(check[j]) continue;
            check[j] = true;
            Board.push_back(j);
            DFS(index + 1, j + 1);
            Board.pop_back();
            check[j] = false;
        }
    }
}

int main() {
    cin >> N >> M;
    DFS(0, 1);
    return 0;
}
