#include <iostream>
#include <string>

/*
 * [69] 프로그래머스 JadenCase 문자열 만들기
 */

using namespace std;

string solution(string s) {
    for(int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);

    for(int i = 0; i < s.size(); i++){
        if(i == 0) s[i] = toupper(s[i]);
        if(s[i] == ' ') s[i+1] = toupper(s[i+1]);
    }
    return s;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
