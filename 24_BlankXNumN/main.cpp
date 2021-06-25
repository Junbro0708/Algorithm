#include <iostream>
#include <string>
#include <vector>

/*
 * 프로그래머스 X 만큼 간격이 있는 N 개의 숫자
 */

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;

    for(int i = 0; i < n; i++){
        answer.push_back((i + 1) * x);
    }
    return answer;
}

