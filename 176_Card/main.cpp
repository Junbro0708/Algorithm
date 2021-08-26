#include <iostream>
#include <vector>
#include <set>
#include <string>

/*
 * [176] 백준 5568번 카드 놓기
 */

using namespace std;

int n, k;
bool isCheck[10] = {false, };
vector<string> arr;
set<int> answer;

void DFS(int count, string temp){
    if(count == k){
        answer.insert(stoi(temp));
        return;
    }else{
        for(int i = 0; i < n; i++){
            if(!isCheck[i]){
                isCheck[i] = true;
                DFS(count + 1, temp + arr[i]);
                isCheck[i] = false;
            }
        }
    }
}

int main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;
        arr.push_back(temp);
    }
    DFS(0, "");
    cout << answer.size() << "\n";
    return 0;
}
