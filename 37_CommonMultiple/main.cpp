#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [37] 프로그래머스 최대공약수와 최소공배수
 */

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer, nums = {n, m};
    int min = 1;

    sort(nums.begin(), nums.end());
    for(int i = 1; i <= nums[0]; i++){
        if(nums[0] % i == 0 && nums[1] % i == 0){
            min = i;
        }
    }
    answer.push_back(min);
    answer.push_back(n * m / min);
    return answer;
}

int main() {
    return 0;
}
