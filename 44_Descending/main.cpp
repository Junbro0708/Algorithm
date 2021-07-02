#include <iostream>
#include <algorithm>

/*
 * [44] 프로그래머스 문자열 내림차순으로 배치하기
 */

using namespace std;

string solution(string s) {
    sort(s.begin(), s.end(), greater<>());
    return s;
}

int main() {
    std::cout << solution("Zbcdefg") << std::endl;
    return 0;
}
