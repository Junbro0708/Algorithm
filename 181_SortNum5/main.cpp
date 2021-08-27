#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [181] 백준 15688번 수 정렬하기 5
 */

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int N;
    cin >> N;

    vector<int> arr;
    while (N--){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << "\n";

    return 0;
}
