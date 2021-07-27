#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [97] 백준 N과 M (6)
 */

using namespace std;

int N, M;
bool check[8];
vector<int> answer;
vector<int> arr;

void DFS(int count, int num){
    if(M == count){
        for(int i = 0; i < M; i++)
            cout << answer[i] << " ";
        cout << "\n";
        return;
    }else{
        for(int j = num; j <= N; j++){
            if(!check[j] && j > 0){
                check[j] = true;
                answer.push_back(arr[j - 1]);
                DFS(count + 1, j);
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
    DFS(0, 1);
    return 0;
}
