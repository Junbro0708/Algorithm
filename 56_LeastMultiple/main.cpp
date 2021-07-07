#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [56] 프로그래머스 N개의 최소공배수
 */

using namespace std;

int solution(vector<int> arr) {
    int answer = 0, largest;
    int cnt = 0, mul = 1;

    sort(arr.begin(), arr.end());
    largest = arr[arr.size() - 1];

    while(cnt != arr.size()){
        cnt = 0;
        answer = largest * mul;

        for(int i = 0; i < arr.size(); i++){
            if(answer % arr[i] == 0) cnt++;
        }
        mul++;
    }
    return answer;
}

int main() {
    std::cout << solution({2, 6, 8, 14}) << std::endl;
    return 0;
}
