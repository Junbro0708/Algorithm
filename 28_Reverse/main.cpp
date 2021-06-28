#include <vector>
#include <iostream>

/*
 * 프로그래머스 자연수 뒤집어 배열로 만들기
 */

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;

    while(n >= 0)
    {
        answer.push_back(n % 10);
        n /= 10;
        if(n == 0)
        {
            return answer;
        }
    }
}

int main() {
    //std::cout << solution(123456789) << std::endl;
    return 0;
}
