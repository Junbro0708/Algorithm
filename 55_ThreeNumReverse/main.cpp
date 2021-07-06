#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

/*
 * [55] 프로그래머스 3진법 뒤집기
 */

using namespace std;

int solution(int n) {
    string str = "";
    int answer = 0, mul = 0;
    while(n > 0){
        str = to_string(n % 3) + str;
        n /= 3;
    }
    reverse(str.begin(), str.end());
    for(int i = str.size()-1; i >= 0; i--){
        answer += (str[i] - 48) * pow(3, mul);
        mul++;
    }
    return answer;
}

int main() {
    std::cout << solution(125) << std::endl;
    return 0;
}
