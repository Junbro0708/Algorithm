#include <iostream>
#include <algorithm>
#include <vector>

/*
 * [113] 백준 2204번 도비의 난독증 테스트
 */

using namespace std;

bool fast(string a, string b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] -= 32;
        }
    }
    for (int j = 0; j < b.size(); j++) {
        if (b[j] >= 'a' && b[j] <= 'z') {
            b[j] -= 32;
        }
    }
    if (a.compare(b) > 0) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cout.tie(NULL); cin.tie(NULL);

    int N; cin >> N;

    while (N != 0) {
        vector<string> v(N);
        for (int i = 0; i < N; i++) {
            string s;
            cin >> s;
            v[i] = s;
        }
        sort(v.begin(), v.end(), fast);
        cout << v[0] << "\n";
        cin >> N;
    }

    return 0;
}