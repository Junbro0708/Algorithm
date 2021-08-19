#include <iostream>

/*
 * [141] 백준 1010번 다리 놓기
 */

using namespace std;

int dp[31][31] = {0, };

int main() {
    int T, N, M;

    for(int i = 0; i < 31; i++)
        dp[1][i] = i;

    for(int i = 2; i < 31; i++){
        for(int j = i; j < 31; j++){
            for (int k = j; k >= i; --k){
                dp[i][j] += dp[i-1][k-1];
            }
        }
    }

    cin >> T;
    while(T--){
        cin >> N >> M;
        cout << dp[N][M] << "\n";
    }
    return 0;
}
