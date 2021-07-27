#include <iostream>
#include <vector>

/*
 * [95] 백준 15652번 N과 M (4)
 */

using namespace std;

int N, M;
vector<int> answer;

void DFS(int cnt, int num){
    if(M == cnt){
        for(int i = 0; i < M ; i++) cout << answer[i] << " ";
        cout << "\n";
        return;
    }else{
        for(int j = num; j <= N; j++){
            answer.push_back(j);
            DFS(cnt + 1, j);
            answer.pop_back();
        }
    }
}

int main() {
    cin >> N >> M;
    DFS(0, 1);
    return 0;
}
