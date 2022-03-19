#include <iostream>

/*
 * [248] 2XN 타일링 2
 */

using namespace std;

#define MAX 1001

int DP[MAX];

int main() {
    int N;
    cin >> N;

    DP[1] = 1;
    DP[2] = 3;
    DP[3] = 5;

    for(int i = 4; i <= N; ++i){
        DP[i] = (DP[i - 1] + DP[i - 2] * 2) % 10007;
    }
    cout << DP[N];
    return 0;
}
