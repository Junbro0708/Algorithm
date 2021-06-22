#include <algorithm>
#include <vector>

/*
 * 프로그래머스 제일 작은 수
 */

using namespace std;

vector<int> solution(vector<int> arr) {
    arr.erase(min_element(arr.begin(), arr.end()));
    if(arr.size() == 0){
        return {-1};
    }
    return arr;
}

