#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [202] 백준 11728번 배열 합치기
 */

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, M;
    cin >> N >> M;

    vector<int> arr_N(N);
    vector<int> arr_M(M);
    for(int i = 0; i < N; i++)
        cin >> arr_N[i];
    for(int i = 0; i < M; i++)
        cin >> arr_M[i];

    for(int i = 0; i < arr_N.size(); i++){
        arr_M.push_back(arr_N[i]);
    }
    sort(arr_M.begin(), arr_M.end());
    for(int i = 0; i < arr_M.size(); i++)
        cout << arr_M[i] << " ";

    return 0;
}
