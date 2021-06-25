#include <iostream>
#include <vector>

/*
 * 프로그래머스 약수의 덧셈
 */

using namespace std;

int solution(int left, int right) {
    int answer = 0;

    for(int i = left; i <= right; i++){
        vector<int> v;
        for(int j = 1; j <= i; j++){
            if(i % j == 0) v.push_back(j);
        }
        if(v.size() % 2 == 0) answer += i;
        else answer -= i;
    }
    return answer;
}

int main() {
    std::cout << solution(13, 17) << std::endl;
    return 0;
}
