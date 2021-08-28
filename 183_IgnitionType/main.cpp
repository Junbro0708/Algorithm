#include <iostream>

/*
 * [183] 백준 13699번 점화식
 */

using namespace std;

int main() {
    int N;
    cin >> N;

    long long int dp[36], temp;
    dp[0] = 1; dp[1] = 1;

    for(int i = 2;i<=N;i++){
        temp = 0;
        for(int j = 0;j<i;j++)
            temp += dp[j]*dp[i-(j+1)];
        dp[i] = temp;
    }

    cout << dp[N];

    return 0;
}
