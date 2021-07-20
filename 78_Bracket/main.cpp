#include <iostream>
#include <stack>

/*
 * [78] 프로그래머스 올바른 괄호
 */

using namespace std;

bool solution(string s)
{
    stack<char> bracket;

    if(s.front() == ')' || s.back() == '(') return false;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(') bracket.push('(');
        else{
            if(!bracket.empty() && bracket.top() == '(') bracket.pop();
            else bracket.push(')');
        }
    }
    if(bracket.empty()) return true;
    else return false;
}

int main() {
    std::cout << solution(")(()") << std::endl;
    return 0;
}
