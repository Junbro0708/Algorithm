#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
 * [220] 백준 10972번 다음 순열
 */

int main() {
    int N;
    cin >> N;

    vector<int> arr;
    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    if(next_permutation(arr.begin(), arr.end())){
        for(int i = 0; i < arr.size(); i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }else{
        cout << -1;
    }
    return 0;
}
