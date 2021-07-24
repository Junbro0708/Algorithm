#include <iostream>

/*
 * [89] 백준 1748번 수 이어 쓰기 1
 */

using namespace std;

int main() {
    int N;
    cin >> N;

    int answer = 0, i = 1;
    while(i <= N){
        answer += (N - i + 1);
        i *= 10;
    }
    cout << answer;

    return 0;
}
