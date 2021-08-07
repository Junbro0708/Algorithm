#include <iostream>

/*
 * [116] 프로그래머스 1주차
 */

using namespace std;

long long solution(int price, int money, int count)
{
    long long int answer, total = 0;
    for(int i = 1; i <= count; i++)
        total += price * i;
    answer = total - money;
    return answer > 0 ? answer : 0;
}

int main() {
    cout << solution(3, 20, 4) << endl;
    return 0;
}
