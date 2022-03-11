#include <iostream>

/*
 * [246] 백준 11726번 2xn 타일링
 */

using namespace std;

#define MAX 1001

int N;
int dp[MAX];

int main() {
    cin >> N;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    dp[4] = 5;

    for(int i = 5; i < MAX; ++i){
        dp[i] = (dp[i-1] + dp[i-2]) % 10007;
    }

    cout << dp[N];
    return 0;
}
