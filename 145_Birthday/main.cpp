#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [145] 백준 5635번 생일
 */

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<pair<int, int>, pair<int, string>>> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i].second.second >> v[i].second.first >> v[i].first.second >> v[i].first.first;

    sort(v.begin(), v.end());
    cout << v[N-1].second.second << "\n" << v[0].second.second << "\n";

    return 0;
}
