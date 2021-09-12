#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [206] 백준 1049번 기타줄
 */

using namespace std;

int main() {
    int N, M;
    vector<int> set;
    vector<int> line;

    cin >> N >> M;
    for(int i = 0; i < M; i++){
        int temp, temp1;
        cin >> temp >> temp1;
        set.push_back(temp);
        line.push_back(temp1);
    }
    sort(set.begin(), set.end());
    sort(line.begin(), line.end());

    cout << min((N/6+1) * set[0], min(N/6 * set[0] + N%6 * line[0], N * line[0])) << "\n";
    return 0;
}
