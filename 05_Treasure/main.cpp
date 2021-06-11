#include <iostream>
#include <vector>
#include <algorithm>

/*
 *  백준 1026번 보물
 */

using namespace std;

int main() {
    int N, num, sum = 0;
    vector<int> A, B;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> num;
        A.push_back(num);
    }
    sort(A.begin(), A.end());
    for(int i = 0; i < N; i++){
        cin >> num;
        B.push_back(num);
    }
    sort(B.begin(), B.end(), greater<int>());
    for(int i = 0; i < N; i++){
        sum += A[i] * B[i];
    }
    cout << sum;
    return 0;
}
