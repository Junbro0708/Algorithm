#include <iostream>
#include <vector>
#include <stack>

/*
 * [154] 백준 9012번 괄호
 */

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> arr(N);
    for(int i = 0; i < N; i++)
        cin >> arr[i];

    for(int i = 0; i < arr.size(); i++){
        bool flag = true;
        stack<int> answer;
        for(int j = 0; j < arr[i].size(); j++){
            if(arr[i][j] == ')' && answer.empty()){
                flag = false;
                break;
            }else if(arr[i][j] == ')' && !answer.empty()){
                answer.pop();
            }else if(arr[i][j] == '(') answer.push(1);
        }
        if(!answer.empty()) flag = false;
        if(flag) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

    return 0;
}
