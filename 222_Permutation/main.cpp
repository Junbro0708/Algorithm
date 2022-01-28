#include <iostream>
#include <algorithm>

/*
 * [222] 백준 9742번 순열
 */

using namespace std;

int main() {
    string s;
    int N;

    while (cin >> s >> N) {
        bool isPermutation = false;
        cout << s << " " << N << " = ";

        int cnt = 0;
        do {
            cnt++;
            if (cnt == N) {
                cout << s << "\n";
                isPermutation = true;
                break;
            }
        } while (next_permutation(s.begin(), s.end()));

        if (!isPermutation) cout << "No permutation" << "\n";
    }

    return 0;
}
