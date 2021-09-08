#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [205] 백준 1931번 회의실 배정
 */

using namespace std;

int main() {
    int N, cnt = 1;
    vector<pair<int, int>> arr;

    cin >> N;
    while (N--){
        int start, end;
        cin >> start >> end;
        arr.push_back(make_pair(end, start));
    }
    sort(arr.begin(), arr.end());
    int time = arr[0].first;

    for(int i = 1; i < arr.size(); i++){
        if(time <= arr[i].second){
            cnt++;
            time = arr[i].first;
        }
    }
    cout << cnt << "\n";
    return 0;
}
