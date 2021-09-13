#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [207] 백준 11047번 동전 0
 */

using namespace std;

int main() {
    int N, K, cnt = 0;
    vector<int> coin;

    cin >> N >> K;
    while (N--){
        int temp;
        cin >> temp;
        coin.push_back(temp);
    }
    sort(coin.begin(), coin.end(), greater<int>());

    for(int i = 0; i < coin.size(); i++){
        if(K - coin[i] < 0)
            continue;
        else{
            while (K - coin[i] >= 0){
                K -= coin[i];
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}
