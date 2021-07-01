#include <iostream>

/*
 * [39] 프로그래머스 콜라츠 추측
 */

using namespace std;

int solution(int num) {
    int cnt = 0;
    long long int n = num;

    while (n != 1){
        if(n % 2 == 0){
            n /= 2;
            cnt++;
        }else{
            n = (n * 3) + 1;
            cnt++;
        }
    }
    if(cnt > 500) return -1;
    return cnt;
}

int main() {
    std::cout << solution(16) << std::endl;
    return 0;
}
