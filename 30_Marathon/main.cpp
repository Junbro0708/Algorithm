#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

/*
 * 프로그래머스 완주하지 못한 선수
 */

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());

    for(int i = 0; i < participant.size(); i++){
        if(participant[i] != completion[i]) return participant[i];
    }
}

int main() {
    std::cout << solution({"leo", "kiki", "eden"}, {"eden", "kiki"}) << std::endl;
    return 0;
}
