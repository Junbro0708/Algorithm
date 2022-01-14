#include <vector>
#include <iostream>

/*
 * [214] 프로그래머스 level 2 n^2 배열 자르기
 */

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;

    for(long long i = left; i <= right; i++){
        int divisor = i / n;
        int left = i % n;

        if(divisor > left) answer.push_back(divisor + 1);
        else answer.push_back(left + 1);
    }
    return answer;
}

//------------------------------------------------------------------

int main() {
    vector<int> answer;
    answer = solution(3, 2, 5);

    for(int i = 0; i < answer.size(); i++){
        cout << answer[i] << " ";
    }
    return 0;
}
