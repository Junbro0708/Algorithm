#include <iostream>
#include <vector>

/*
 * [173] 백준 1940번 주몽
 */

using namespace std;

int N, M, cnt = 0;
vector<int> arr;

int main() {
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    for(int i = 0; i < N - 1; i++){
        for(int j = i + 1; j < N; j++){
            if(arr[i] + arr[j] == M)
                cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}
