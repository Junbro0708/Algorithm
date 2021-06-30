#include <iostream>
#include <cstring>
#include <cmath>

/*
 * 프로그래머스 소수 찾기
 */

using namespace std;

int solution(int n) { // 시간 초과 (제곱근 이용)
    int answer = 0;
    for(int i = 2; i <= n; i++){
        bool flag = true;
        for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                flag = false;
                break;
            }
        }
        if(flag)
            answer++;
    }
    return answer;
}

int solution_A(int n){ // 에라토스테네스의 체
    int res = 0;
    bool array[n+1];
    memset(array, false, sizeof(array));
    for(int i = 2; i <= n; i++){
        if(!array[i])
            res++;
        for(int j = i; j <= n; j += i){
            array[j] = true;
        }
    }
    return res;
}

int main() {
    std::cout << solution_A(5) << std::endl;
    return 0;
}
