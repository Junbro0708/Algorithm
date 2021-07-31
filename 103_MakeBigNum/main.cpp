#include <string>
#include <iostream>

/*
 * [103] 프로그래머스 큰 수 만들기
 */

using namespace std;

string solution(string number, int k) {
    string answer = "";
    int n = number.size();

    int start = 0;
    int end = k;

    char max = ' ';
    int lastMaxIndex = 0;

    for(int i = 0; i < n - k; i++){
        for(int j = start; j <= end; j++){
            if(max < number[j]){
                max = number[j];
                lastMaxIndex = j;
            }
        }
        answer.append(1, max);
        start = lastMaxIndex + 1;
        end++;
        max = ' ';
    }

    return answer;
}

int main() {
    std::cout << solution("1231234", 3) << std::endl;
    return 0;
}
