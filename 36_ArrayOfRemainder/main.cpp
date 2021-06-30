#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [36] 프로그래머스 나누어 떨어지는 숫자 배열
 */

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % divisor == 0) answer.push_back(arr[i]);
    }
    if(answer.size() == 0) answer.push_back(-1);
    sort(answer.begin(), answer.end());
    return answer;
}

int main() {
    solution({5, 9, 7, 10}, 5);
    return 0;
}
