#include <iostream>

/*
 * [249] 백준 2156번 포도주 시식
 */

using namespace std;

#define MAX 11

int DP[MAX];

int main() {
    DP[1] = 1;
    DP[2] = 2;
    DP[3] = 4;
    DP[4] = 7;

    for(int i = 5; i < MAX; ++i){
        DP[i] = DP[i-3] + DP[i-2] + DP[i-1];
    }

    int T, N;
    cin >> T;

    while (T--){
        cin >> N;
        cout << DP[N] << "\n";
    }
    return 0;
}
