#include <iostream>

/*
 * [210] 프로그래머스 level 1 나머지가 1이 되는 수 찾기
 */

using namespace std;

int solution(int n) {
    int answer = 0;

    for(int i = 1; i < n; i++){
        if(n % i == 1){
            answer = i;
            break;
        }
    }
    return answer;
}

---------------------------------------------------------

int main() {
    cout << solution(12);
    return 0;
}
