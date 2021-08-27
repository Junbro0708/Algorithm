#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [182] 백준 11650번 좌표 정렬하기
 */

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> arr;
    while (N--){
        int x, y;
        cin >> x >> y;
        arr.push_back(make_pair(x, y));
    }
    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i].first << " " << arr[i].second << "\n";
    }
    return 0;
}
