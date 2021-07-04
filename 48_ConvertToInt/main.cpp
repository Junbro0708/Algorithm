#include <iostream>
#include <string>

/*
 * [48] 프로그래머스 문자열을 정수로 바꾸기
 */

using namespace std;

int solution(string s) {
    return stoi(s);
}

int main() {
    std::cout << solution("-1234") << std::endl;
    return 0;
}
