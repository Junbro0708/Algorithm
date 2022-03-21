#include <iostream>

/*
 * [250] 백준 1149번 RGB 거리
 */

using namespace std;

#define MAX 1001

int N;
int DP[MAX][3];

int main() {
    cin >> N;
    for(int i = 1; i <= N; ++i){
        int temp1, temp2, temp3;
        cin >> temp1 >> temp2 >> temp3;

        DP[i][0] = temp1;
        DP[i][1] = temp2;
        DP[i][2] = temp3;
    }

    for(int i = 2; i <= N; ++i){
        DP[i][0] += min(DP[i-1][1], DP[i-1][2]);
        DP[i][1] += min(DP[i-1][0], DP[i-1][2]);
        DP[i][2] += min(DP[i-1][1], DP[i-1][0]);
    }

    cout << min(DP[N][0], min(DP[N][1], DP[N][2]));
    return 0;
}
