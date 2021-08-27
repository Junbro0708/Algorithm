#include <iostream>
#include <vector>

/*
 * [179] 백준 2508번 사탕 박사 고창영
 */

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--){
        int R, C, cnt = 0;
        cin >> R >> C;
        vector<string> arr;
        for(int i = 0; i < R; i++){
            string temp;
            cin >> temp;
            arr.push_back(temp);
        }

        for(int i = 0; i < R; i++){
            for(int j = 0; j < C - 2; j++){
                if(arr[i][j]== 62 && arr[i][j+1]== 'o' && arr[i][j+2]== 60) cnt++;
            }
        }
        for(int i = 0; i < R - 2; i++){
            for(int j = 0; j < C; j++){
                if(arr[i][j]== 118 && arr[i+1][j]== 'o' && arr[i+2][j]== 94) cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
