#include <iostream>
#include <vector>

/*
 * [34] 프로그래머스 폰켓몬
 */

using namespace std;

int solution(vector<int> nums)
{
    int max = nums.size() / 2;
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    if(max <= nums.size()) return max;
    else return nums.size();
}

int main() {
    std::cout << solution({3, 2, 3, 3, 2, 2}) << std::endl;
    return 0;
}
