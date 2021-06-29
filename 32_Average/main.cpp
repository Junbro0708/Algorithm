#include <iostream>
#include <vector>

/*
 * 프로그래머스 평균 구하기
 */

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for(int i = 0; i < arr.size(); i++) answer += arr[i];
    return answer / arr.size();
}

int main() {
    std::cout << solution({1, 2, 3, 4}) << std::endl;
    return 0;
}
