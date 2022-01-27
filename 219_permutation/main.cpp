#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [219] 백준 10974번 모든 순열
 */

using namespace std;

int main() {
    ios_base::sync_with_stdio(NULL);
    cout.tie(0); cin.tie(0);

    int N;
    cin >> N;

    vector<int> arr(N, 0);

    for(int i = 1; i <= N; i++)
        arr[i-1] = i;

    do{
        for(int i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << "\n";
    } while (next_permutation(arr.begin(), arr.end()));
    return 0;
}
