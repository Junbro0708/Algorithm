#include <iostream>
#include <string>

/*
 * [45] 프로그래머스 수박수박수박수박수박수?
 */

using namespace std;

string solution(int n) {
    string answer = "";
    for(int i = 0; i < n; i++){
        if(i % 2 == 0) answer += "수";
        else answer += "박";
    }
    return answer;
}

int main() {
    std::cout << solution(3) << std::endl;
    return 0;
}
