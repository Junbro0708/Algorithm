#include <iostream>

/*
 * [62] 프로그래머스 숫자의 표현
 */

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i = 1; i <= n; i++){
        int temp = i;
        int j = temp;
        while(true){
            if(temp == n){answer++; break;}
            else if(temp > n) break;
            else j++;
            temp += j;
        }
    }
    return answer;
}

int main() {
    std::cout << solution(15) << std::endl;
    return 0;
}
