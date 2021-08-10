#include <iostream>
#include <cstring>

/*
 * [122] 백준 2960번 에라토스테네스의 체
 */

using namespace std;

int main() {
    int N, K;
    int arr[1001];

    memset(arr, 0, sizeof(arr));
    cin >> N >> K;

    for (int i = 2; i <= N; ++i) {
        for (int j = i; j <= N; j += i) {
            if (arr[j] == 0) {
                arr[j] = 1;
                --K;
            }
            if (K == 0) {
                cout << j << endl;
                return 0;
            }
        }
    }
    return 0;
}
