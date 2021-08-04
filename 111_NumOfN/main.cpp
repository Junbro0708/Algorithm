#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [111] 백준 2693번 N번째 큰 수
 */

using namespace std;

int main() {
    int A;
    vector<vector<int>> arrays;
    cin >> A;

    for(int i = 0; i < A; i++){
        vector<int> tempArray;
        for(int j = 0; j < 10; j++){
            int temp;
            cin >> temp;
            tempArray.push_back(temp);
        }
        sort(tempArray.begin(), tempArray.end(), greater<int>());
        arrays.push_back(tempArray);
    }

    for(int i = 0; i < A; i++){
        cout << arrays[i][2] << "\n";
    }

    return 0;
}
