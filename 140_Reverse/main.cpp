#include <iostream>
#include <vector>

/*
 * [140] 백준 15738번 뒤집기
 */

using namespace std;

int main() {
    int N, K, M, temp;
    vector<int> arr;
    cin >> N >> K >> M;

    for(int i = 0; i < N; i++){
        cin >> temp;
        arr.push_back(temp);
    }

    while(M--){
        cin >> temp;
        if(temp < 0) K += temp - 1;
        else K += temp;

        if(K <= 0) K += N;
        else if(K > N) K -= N;
    }
    cout << K << "\n";
    return 0;
}
