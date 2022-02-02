#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

/*
 * [226] 백준 14888번 연산자 끼워넣기
 */

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> nums(N, 0);
    for(int i = 0; i < nums.size(); ++i)
        cin >> nums[i];
    vector<int> operation(4, 0);
    for(int i = 0; i < operation.size(); ++i)
        cin >> operation[i];

    vector<int> mask;
    for(int i = 0; i < operation.size(); ++i){
        while (operation[i] > 0){
            mask.push_back(i);
            operation[i]--;
        }
    }
    sort(mask.begin(), mask.end());

    int min_ = INT_MAX, max_ = INT_MIN;
    do{
        int cost = nums[0];
        for(int i = 0; i < mask.size(); ++i){
            switch (mask[i]) {
                case 0:
                    cost += nums[i+1];
                    break;
                case 1:
                    cost -= nums[i+1];
                    break;
                case 2:
                    cost *= nums[i+1];
                    break;
                case 3:
                    cost /= nums[i+1];
                    break;
                default:
                    break;
            }
        }
        min_ = min(min_, cost); max_ = max(max_, cost);
    }while (next_permutation(mask.begin(), mask.end()));

    cout << max_ << "\n" << min_;

    return 0;
}
