#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [114] 백준 2751번 수 정렬하기
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

    sort(arr.begin(), arr.end());
    for(int j = 0; j < arr.size(); j++){
        cout << arr[j] << "\n";
    }
    return 0;
}
