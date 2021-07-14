#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

/*
 * [65] 프로그래머스 최댓값과 최솟값
 */

using namespace std;

string solution(string s) {
    vector<int> nums;
    istringstream ss(s);
    string stringBuffer;

    while(getline(ss, stringBuffer, ' ')){
        nums.push_back(stoi(stringBuffer));
    }

    int min = *min_element(nums.begin(), nums.end());
    int max = *max_element(nums.begin(), nums.end());

    return to_string(min) + " " + to_string(max);
}

int main() {
    std::cout << solution("1 2 3 4") << std::endl;
    return 0;
}
