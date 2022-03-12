#include <iostream>
#include <cstring>
#include <algorithm>

/*
 * [247] 백준 2839번 설탕 배달
 */

using namespace std;

#define MAX 999999

int DP[MAX];

int main() {
    int N;
    cin >> N;

    memset(DP, MAX, sizeof(DP));
    DP[3] = DP[5] = 1;

    for(int i = 6; i <= N; ++i){
        DP[i] = min(DP[i - 3] + 1, DP[i - 5] + 1);
    }

    if(DP[N] >= MAX)
        cout << "-1" << "\n";
    else
        cout << DP[N] << "\n";
    return 0;
}
