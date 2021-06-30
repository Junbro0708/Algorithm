#include <iostream>
#include <vector>

/*
 * 프로그래머스 가운데 글자 가져오기
 */

using namespace std;

string solution(string str) {
    string answer = "";

    if(str.length() % 2 == 1)
        answer = str[str.length() / 2];
    else{
        answer = str[str.length() / 2 - 1];
        answer += str[str.length() / 2];
    }
    return answer;
}

int main() {
    cout << solution("qwer");
    return 0;
}
