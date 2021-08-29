#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [191] 백준 11931번 수 정렬하기 4
 */

using namespace std;

int main() {
    int N;
    vector<int> arr;

    cin >> N;
    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end(), greater<int>());

    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << "\n";
    return 0;
}
