#include <iostream>

/*
 * 백준 9655번 돌 게임
 */

using namespace std;

int main() {
    int N;

    cin >> N;

    if(N % 2 == 0) cout << "CY" << endl;
    else cout << "SK" << endl;

    return 0;
}
