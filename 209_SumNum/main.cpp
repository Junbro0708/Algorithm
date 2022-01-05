#include <vector>
#include <iostream>

/*
 * [209] 프로그래머스 level 1 없는 숫자 더하기
 */

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;

    for(int i = 0; i < 10; i++)
        if(find(numbers.begin(), numbers.end(), i) == numbers.end())
            answer += i;

    return answer;
}

int main(){
    vector<int> numbers = {1, 2, 3, 4, 6, 7, 8, 0};
    cout << solution(numbers) << endl;
}