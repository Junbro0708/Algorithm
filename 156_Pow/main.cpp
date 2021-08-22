#include <iostream>

/*
 * [156] 백준 1740번 거듭 제곱
 */

using namespace std;

int main() {
    long long int N;
    cin >> N;

    long long int pow = 1, answer = 0;
    while(N){
        if(N % 2 == 1) answer += pow;
        N /= 2;
        pow *= 3;
    }
    cout << answer << "\n";
    return 0;
}
