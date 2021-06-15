#include <iostream>
#include <vector>
#include <algorithm>

/*
 * 백준 1037번 약수
 */

using namespace std;

int main() {
    int N;
    vector<int> divisor;

    cin >> N;

    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        divisor.push_back(num);
    }
    sort(divisor.begin(), divisor.end());
    cout << divisor[0] * divisor[N-1];;
    return 0;
}
