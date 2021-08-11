#include <vector>
#include <iostream>
#include <cstring>

/*
 * [123] 백준 2563번 색종이
 */

using namespace std;

int main() {
    int arr[101][101];
    memset(arr, 0, sizeof(arr));

    int N, count = 0;
    int X, Y;

    cin >> N;
    while (N--){
        cin >> X >> Y;

        for (int i = X; i < X + 10; ++i) {
            for (int j = Y; j < Y + 10; ++j) {
                arr[i][j] = 1;
            }
        }
    }

    for(int i = 0; i < 101; i++){
        for(int j = 0; j < 101; j++){
            if(arr[i][j] == 1) count++;
        }
    }

    cout << count << "\n";
    return 0;
}
