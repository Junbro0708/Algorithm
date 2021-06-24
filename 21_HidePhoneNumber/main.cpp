#include <string>
#include <iostream>

/*
 * 프로그래머스 핸드폰 번호 가리기
 */

using namespace std;

string solution(string phone_number) {
    for(int i = 0; i < phone_number.length() - 4; i++){
        phone_number.replace(i, 1, "*");
    }
    return phone_number;
}

int main() {
    std::cout << solution("01033334444") << std::endl;
    return 0;
}
