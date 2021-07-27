#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [96] 백준 15654번 N과 M (5)
 */

using namespace std;

int N, M;
bool check[8];
vector<int> answer;
vector<int> arr;

void DFS(int count){
    if(count == M){
        for(int i = 0; i < M; i++)
            cout << answer[i] << " ";
        cout << "\n";
        return;
    }else{
        for(int j = 0; j < N; j++){
            if(!check[j]){
                check[j] = true;
                answer.push_back(arr[j]);
                DFS(count + 1);
                answer.pop_back();
                check[j] = false;
            }
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
