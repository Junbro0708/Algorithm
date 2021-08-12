#include <iostream>

/*
 * [128] 백준 2799번 블라인드
 */

using namespace std;

int M, N;
int blind[5] = {0, };
char map[501][501];

int main() {
    string s;
    cin >> M >> N;

    for (int i = 0; i < M * 5 + 1; ++i) {
        cin >> s;
        for (int j = 0; j < s.length(); ++j)
            map[i][j] = s[j];
    }

    for (int i = 1; i < M * 5 + 1; i += 5) {
        for (int j = 1; j < N * 5 + 1; j += 5) {
            if (map[i][j] == '.') blind[0]++;
            else if (map[i + 1][j] == '.') blind[1]++;
            else if (map[i + 2][j] == '.') blind[2]++;
            else if (map[i + 3][j] == '.') blind[3]++;
            else blind[4]++;
        }
    }
    for (int i = 0; i < 5; ++i)
        cout << blind[i] << " ";

    return 0;
}
