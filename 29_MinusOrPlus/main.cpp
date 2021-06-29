#include <iostream>
#include <vector>

/*
 * 프로그래머스 음양 더하기
 */

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    for(int i = 0; i < absolutes.size(); i++){
        if(signs[i]) answer += absolutes[i];
        else answer -= absolutes[i];
    }
    return answer;
}

int main() {
    std::cout << solution({4, 7, 12}, {true, false, true}) << std::endl;
    return 0;
}
