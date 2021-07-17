#include <iostream>

/*
 * [73] 백준 10430 나머지
 */

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << (a + b) % c << endl;
    cout << ((a % c) + (b % c)) % c << endl;
    cout << (a * b) % c << endl;
    cout << ((a % c) * (b % c)) % c << endl;
    return 0;
}
