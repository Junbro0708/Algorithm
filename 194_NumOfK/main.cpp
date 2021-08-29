#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [194] 11004번 백준 K번째 수
 */

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A, K;
    cin >> A >> K;

    vector<int> arr;
    while(A--){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());

    cout << arr[K-1] << "\n";

    return 0;
}
