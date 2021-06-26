#include <iostream>

/*
 * 프로그래머스 약수의 합
 */

using namespace std;

int solution(int n) {
    int answer = 0;

    for(int i = 1; i <= n ; i++){
        if(n % i == 0) answer += i;
    }

    return answer;
}

int main() {
    std::cout << solution(12) << std::endl;
    return 0;
}
