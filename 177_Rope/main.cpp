#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [177] 백준 2217번 로프
 */

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> rope;
    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        rope.push_back(temp);
    }
    sort(rope.begin(), rope.end(), greater<int>());

    long long int result = 0;
    for (int i = 0; i < N; i++) {
        long long int sum = rope[i] * (i + 1);
        if(sum > result)
            result = sum;
    }
    cout << result;
    return 0;
}
