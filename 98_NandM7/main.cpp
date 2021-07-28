#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [98] 백준 15656번 N과 M (7)
 */

using namespace std;

int N, M;
vector<int> answer;
vector<int> arr;

void DFS(int count){
    if(M == count){
        for(int i = 0; i < M; i++)
            cout << answer[i] << " ";
        cout << "\n";
        return;
    }else{
        for(int j = 0; j < N; j++){
            answer.push_back(arr[j]);
            DFS(count + 1);
            answer.pop_back();
        }
    }
}

int main() {
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    DFS(0);
    return 0;
}
