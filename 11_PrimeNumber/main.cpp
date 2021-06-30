#include <iostream>
#include <vector>

/*
 * 프로그래머스 소수 만들기
 */

using namespace std;

bool isPrime(int num){
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0, num;

    for(int i = 0; i < nums.size() - 2; i++){
        for(int j = i + 1; j < nums.size() - 1; j++){
            for(int z = j + 1; z < nums.size(); z++){
                num = nums[i] + nums[j] + nums[z];
                if(isPrime(num)) answer++;
            }
        }
    }

    return answer;
}

int main() { // 테스트
    vector<int> num = {1, 2, 3, 4};
    cout << solution(num) << endl;
    return 0;
}
