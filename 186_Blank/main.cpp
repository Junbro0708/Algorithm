#include <iostream>
#include <stack>

/*
 * [186] 백준 11899번 괄호 끼워넣기
 */

using namespace std;

int main() {
    string temp;
    cin >> temp;

    stack<char> answer;
    for(int i = 0; i < temp.length(); i++){
        if(!answer.empty() && answer.top() == '(' && temp[i] == ')')
            answer.pop();
        else answer.push(temp[i]);
    }
    cout << answer.size() << "\n";
    return 0;
}
