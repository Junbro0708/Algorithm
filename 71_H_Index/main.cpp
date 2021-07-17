#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [71] 프로그래머스 H-Index
 */

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end(), greater<int>());

    for(int i = 0; i < citations.size(); i++){
        if(citations[i] <= answer) break;
        answer++;
    }
    return answer;
}

int main() {
    std::cout << solution({3, 0, 6, 1, 5}) << std::endl;
    return 0;
}
