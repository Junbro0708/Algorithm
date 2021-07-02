#include <iostream>
#include <string>
#include <vector>

/*
 * [41] 프로그래머스 서울에서 김서방 찾기
 */

using namespace std;

string solution(vector<string> seoul) {
    string answer = "김서방은 ";
    for(int i = 0; i < seoul.size(); i++) {
        if(seoul[i] == "Kim") answer += to_string(i) + "에 있다";
    }
    return answer;
}

int main() {
    std::cout << solution({"Jane", "Kim"}) << std::endl;
    return 0;
}
