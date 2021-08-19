#include <iostream>
#include <algorithm>
#include <vector>

/*
 * [144] 백준 1895번 픽셀
 */

using namespace std;

int main() {
    int R, C, T, ans = 0;
    cin >> R >> C;

    vector<vector<int>> image(R, vector<int>(C, 0));
    for(int i = 0; i < R; i++)
        for(int j = 0; j < C; j++)
            cin >> image[i][j];

    cin >> T;
    for(int i = 0; i < R - 2; i++){
        for(int j = 0; j < C - 2; j++){
            vector<int> arr;
            for(int r = 0; r <= 2; r++)
                for(int c = 0; c <= 2; c++)
                    arr.push_back(image[i + r][j + c]);
            sort(arr.begin(), arr.end());
            if(arr[4] >= T) ans++;
        }
    }

    cout << ans << "\n";
    return 0;
}
