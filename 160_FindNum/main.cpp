#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [160] 백준 1920번 수 찾기
 */

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> arr(N);
    for(int i = 0; i < N; i++)
        cin >> arr[i];

    int M;
    cin >> M;

    vector<int> answer(M);
    for(int i = 0; i < M; i++)
        cin >> answer[i];

    for(int i = 0; i < M; i++){
        if(find(arr.begin(), arr.end(), answer[i]) != arr.end())
            cout << "1" << "\n";
        else cout << "0" << "\n";
    }
    return 0;
}
