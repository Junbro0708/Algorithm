#include <iostream>
#include <string>
#include <cmath>

/*
 * [47] 프로그래머스 카카오 [1차] 다트 게임
 */

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int prev = 0, pres = 0;

    for (int i = 0; i < dartResult.size(); i++) {
        if (dartResult[i] >= '0' && dartResult[i] <= '9') {
            pres = dartResult[i] - 48;

            if (dartResult[i + 1] == '0') {
                pres = 10;
                i++;
            }
        }else if(dartResult[i] == 'S' || dartResult[i] == 'D' || dartResult[i] == 'T'){
            if(dartResult[i] == 'D') pres = pow(pres, 2);
            else if(dartResult[i] == 'T') pres = pow(pres, 3);

            if(dartResult[i+1] == '*' || dartResult[i+1] == '#'){
                if(dartResult[i+1] == '#'){
                    pres *= -1;
                    i++;
                }else if(dartResult[i+1] == '*'){
                    pres *= 2;
                    prev *= 2;
                    i++;
                }
            }
            answer += prev;
            prev = pres;
        }
    }
    answer += prev;
    return answer;
}

int main() {
    std::cout << solution("1S2D*3T") << std::endl;
    return 0;
}
