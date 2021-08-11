#include <iostream>
#include <cstring>

/*
 * [125] 백준 1531번 투명
 */

using namespace std;

int main() {
    int N, M;
    int x1, y1, x2, y2, sum = 0;
    int arr[101][101];

    memset(arr, 0, sizeof(arr));
    cin >> N >> M;

    while(N--){
        cin >> x1 >> y1 >> x2 >> y2;
        for (int x = x1; x <= x2; x++) {
            for (int y = y1; y <= y2; y++)
                arr[x][y]++;
        }
    }
    for (int i = 1; i < 101; i++) {
        for (int j = 1; j < 101; j++)
            if (arr[i][j] > M) sum++;
    }
    cout << sum;
    return 0;
}
