#include <string>
#include <iostream>

/*
 * 프로그래머스 짝수와 홀수
 */

using namespace std;

string solution(int num) {
    if(num % 2 == 0 || !num) return "Even";
    else return "Odd";
}

int main() {
    std::cout << solution(4) << std::endl;
    return 0;
}
