#include <iostream>
#include <vector>

/*
 * [90] 백준 9095번 1, 2, 3 더하기
 */

using namespace std;

int main() {
    int dp[11], N;
    dp[1] = 1, dp[2] = 2, dp[3] = 4;

    for(int i = 4; i < 11; i++){
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

    cin >> N;
    vector<int> answer;

    for(int j = 0; j < N; j++){
        int temp;
        cin >> temp;
        answer.push_back(temp);
    }

    for(int k = 0; k < N; k++){
        cout << dp[answer[k]] << endl;
    }
    return 0;
}
