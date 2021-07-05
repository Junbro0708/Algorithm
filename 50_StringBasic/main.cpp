#include <iostream>
#include <string>

/*
 * [50] 프로그래머스 문자열 다루기 기본
 */

using namespace std;

bool solution(string s) {
    for(int i = 0; i < s.size(); i++){
        if(!(s[i] >= '0' && s[i] <= '9')) return false;
    }
    if(!(s.size() == 4 || s.size() == 6)) return false;
    else return true;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
