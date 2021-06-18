#include <iostream>
#include <vector>
#include <algorithm>

/*
 * 프로그래머스 두개 뽑아서 더하기
 */

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;

    for(int i = 0; i < numbers.size() - 1; i++){
        for(int j = i + 1; j < numbers.size(); j++){
            answer.push_back(numbers[i] + numbers[j]);
        }
    }
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    return answer;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    solution(nums);

    return 0;
}
