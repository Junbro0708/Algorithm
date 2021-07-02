#include <iostream>

/*
 * [42] 프로그래머스 두 정수 사이의 합
 */

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;

    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }

    for(int i = a; i <= b; i++) answer += i;
    return answer;
}

int main() {
    std::cout << solution(3, 5) << std::endl;
    return 0;
}
