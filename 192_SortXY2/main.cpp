#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [192] 백준 11651번 좌표 정렬하기 2
 */

using namespace std;

int main() {
    int N;
    vector<pair<int, int>> arr;

    cin >> N;
    for(int i = 0; i < N; i++){
        int temp1, temp2;
        cin >> temp1 >> temp2;
        arr.push_back(make_pair(temp2, temp1));
    }
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i].second << " " << arr[i].first << "\n";
    }
    return 0;
}
