#include <iostream>
#include <stack>

/*
 * [86] 프로그래머스 짝지어 제거하기
 */

using namespace std;

int solution(string s)
{
    stack<char> st;

    for(int i = 0; i < s.length(); ++i){
        if(!st.empty() && st.top() == s[i]) st.pop();
        else st.push(s[i]);
    }

    if(st.empty()) return 1;
    else return 0;
}

int main() {
    std::cout << solution("baabaa") << std::endl;
    return 0;
}
