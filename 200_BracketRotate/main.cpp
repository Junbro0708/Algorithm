#include <string>
#include <vector>
#include <stack>

/*
 * [200] 프로그래머스 Level 2 괄호 회전하기
 */

using namespace std;

int solution(string s) {
    int answer = 0;

    for(int i = 0; i < s.length(); i++){
        bool flag = false;
        stack<char> temp;
        for(int j = 0; j < s.length(); j++){
            if(s[j] == '[' || s[j] == '{' || s[j] == '('){
                flag = true;
                temp.push(s[j]);
            }else{
                if (s[j] == ']' && temp.top() == '[')
                    temp.pop();
                if (s[j] == '}' && temp.top() == '{')
                    temp.pop();
                if (s[j] == ')' && temp.top() == '(')
                    temp.pop();
            }
        }
        if(temp.empty() && flag) answer++;

        char ch = s.front();
        s.erase(s.begin());
        s.push_back(ch);
    }
    return answer;
}