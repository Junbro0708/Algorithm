#include <iostream>

/*
 * 백준 1057번 토너먼트
 */

using namespace std;

int main() {
    int N, a, b, cnt = 0;
    cin >> N >> a >> b;
    while(a != b){
        a -= a / 2;
        b -= b / 2;
        cnt++;
    }
    cout << cnt;
    return 0;
}
