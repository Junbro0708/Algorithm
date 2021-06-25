#include <iostream>
#include <cmath>

/*
 * 프로그래머스 정수 제곱근 판별
 */

using namespace std;

long long solution(long long n) {
    if(sqrt(n) == (int)sqrt(n)) return pow(sqrt(n)+1, 2);
    else return -1;
}

int main() {
    std::cout << solution(121) << std::endl;
    return 0;
}
