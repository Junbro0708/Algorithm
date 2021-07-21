#include <iostream>
#include <vector>
#include <cmath>

/*
 * [81] 백준 1978번 소수 찾기
 */

using namespace std;

bool isPrime(int num){
    int end = sqrt(num);
    if(num == 1) return false;
    for(int i = 2; i <= end; i++){
        if(num % i == 0) return false;
    }
    return true;
}

int main() {
    int N, cnt = 0;
    cin >> N;

    vector<int> nums;
    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    for(int j = 0; j < nums.size(); j++){
        if(isPrime(nums[j])) cnt++;
    }

    cout << cnt;

    return 0;
}
