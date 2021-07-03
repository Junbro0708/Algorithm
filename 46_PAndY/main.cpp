#include <iostream>
#include <string>

/*
 * [46] 프로그래머스 문자열 내 p와 y의 개수
 */

using namespace std;

bool solution(string s)
{
    int P = 0, Y = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'P' || s[i] == 'p') P++;
        else if(s[i] == 'Y' || s[i] == 'y') Y++;
    }
    if(P == Y) return true;
    else return false;
}

int main() {
    std::cout << solution("Pyy") << std::endl;
    return 0;
}
