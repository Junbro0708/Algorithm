#include <iostream>
#include <cmath>

/*
 * [70] 백준 2로 몇 번 나누어떨어질까
 */

using namespace std;

typedef long long ll;
ll a, b;

ll solve(ll a) {
    ll ans = 0, temp = 1;
    while (a != 0) {
        if (a % 2 != 0) ans += ((a / 2) + 1)*temp;
        else ans += (a / 2)*temp;
        a /= 2;
        temp *= 2;
    }
    return ans;
}

int main(void) {
    cin >> a >> b;
    cout << solve(b) - solve(a - 1);
}
