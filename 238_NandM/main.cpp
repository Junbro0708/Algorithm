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
    if(count == M){
        for(int i = 0; i < Board.size(); ++i){
            cout << Board[i] << " ";
        }
        cout << "\n";
        return;
    }else{
        for(int i = 1; i <= N; ++i){
            if(check[i]) continue;
            check[i] = true;
            Board.push_back(i);
            DFS(count + 1);
            Board.pop_back();
            check[i] = false;
        }
    }
}

int main() {
    cin >> N >> M;
    DFS(0);
    return 0;
}
