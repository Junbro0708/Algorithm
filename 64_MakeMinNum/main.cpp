#include <iostream>
#include<vector>
#include <algorithm>

/*
 * [64] 프로그래머스 최솟값 만들기
 */

using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());

    for(int i = 0; i < A.size(); i++){
        answer += A[i] * B[i];
    }

    return answer;
}

int main() {
    std::cout << solution({1, 2}, {3, 4}) << std::endl;
    return 0;
}
