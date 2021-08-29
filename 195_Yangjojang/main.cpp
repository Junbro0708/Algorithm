#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [195] 백준 11557번 Yangjojang of The Year
 */

using namespace std;

int main() {
    int T, N;
    cin >> T;

    while(T--){
        vector<pair<int, string>> arr;
        cin >> N;

        for(int i = 0; i < N; i++){
            string temp;
            int temp2;
            cin >> temp >> temp2;
            arr.push_back(make_pair(temp2, temp));
        }
        sort(arr.begin(), arr.end());
        cout << arr.back().second << "\n";
    }
    return 0;
}
