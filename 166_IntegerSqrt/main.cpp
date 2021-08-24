#include <iostream>
#include <cmath>

/*
 * [166] 백준 2417번 정수 제곱근
 */

using namespace std;

int main() {
    long long int N;
    long long int q;

    cin >> N;
    q = sqrt(N);

    if(q * q < N) q++;
    cout << q << "\n";

    return 0;
}
