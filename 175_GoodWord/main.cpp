#include <iostream>
#include <stack>

/*
 * [175] 백준 3986번 좋은 단어
 */

using namespace std;

int main() {
    int N, cnt = 0;
    cin >> N;

    while (N--){
        string temp;
        cin >> temp;

        stack<char> isCheck;
        for(int i = 0; i < temp.length(); i++){
            if(isCheck.empty()) isCheck.push(temp[i]);
            else{
                if(isCheck.top() == temp[i]) isCheck.pop();
                else isCheck.push(temp[i]);
            }
        }
        if(isCheck.empty()) cnt++;
    }

    cout << cnt << "\n";
    return 0;
}
