#include <iostream>

/*
 * [67] 프로그래머스 다음 큰 숫자
 */

using namespace std;

int DecimalToTwo(int n){
    int count = 0;
    while(n > 0){
        if(n % 2 == 1) count++;
        n /= 2;
    }
    return count;
}

int solution(int n) {
    int nextN = n;

    while(true){
        nextN++;
        if(DecimalToTwo(n) == DecimalToTwo(nextN))
            return nextN;
    }
}

int main() {
    std::cout << solution(78) << std::endl;
    return 0;
}
