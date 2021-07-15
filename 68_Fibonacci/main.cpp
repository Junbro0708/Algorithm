#include <iostream>

/*
 * [68] 프로그래머스 피보나치 수
 */

using namespace std;

int Fibonacci(int num){ // 재귀 함수로 인한 시간 초과
    if(num == 1 || num == 2) return 1;
    else return Fibonacci(num - 1) + Fibonacci(num - 2);
}

int solution(int n) {
    int F[100001];
    F[0] = 0, F[1] = 1;

    for(int i = 2; i <= n; i++){
        F[i] = (F[i - 1] + F[i - 2]) % 1234567;
    }

    return F[n];
}

int main() {
    std::cout << solution(3) << std::endl;
    return 0;
}
