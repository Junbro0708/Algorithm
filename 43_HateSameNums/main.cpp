#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [43] 프로그래머스 같은 숫자는 싫어
 */

using namespace std;

vector<int> solution(vector<int> arr)
{
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    return arr;
}

int main() {
    return 0;
}
