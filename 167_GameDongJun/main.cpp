#include <iostream>
#include <vector>

/*
 * [167] 백준 2847번 게임을 만든 동준이
 */

using namespace std;

int main() {
    int N, cnt = 0;
    cin >> N;

    vector<int> arr;
    while(N--){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    for(int i = arr.size() - 1; i > 0; i--){
        if(arr[i] <= arr[i-1]){
            while(true){
                arr[i-1] -= 1;
                cnt++;
                if(arr[i] > arr[i-1]) break;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}
