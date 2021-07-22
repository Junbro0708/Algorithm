#include <iostream>
#include <string>

/*
 * [85] 프로그래머스 124 나라의 숫자
 */

using namespace std;

string solution(int n) {
    string answer = "";

    while(n != 0){
        int remainder = n % 3;
        n /= 3;

        if(remainder == 0) {
            answer = "4" + answer;
            n--;
        }
        else if(remainder == 1) answer = "1" + answer;
        else if(remainder == 2) answer = "2" + answer;
    }
    return answer;
}

int main() {
    std::cout << solution(4) << std::endl;
    return 0;
}
