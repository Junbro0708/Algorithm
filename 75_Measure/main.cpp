#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [75] 백준 1037번 약수
 */

using namespace std;

int main() {
    int num, answer;
    vector<int> ms;

    cin >> num;

    for(int i = 0; i < num; i++){
        int temp;
        cin >> temp;
        ms.push_back(temp);
    }

    sort(ms.begin(), ms.end());
    answer = ms[0] * ms[ms.size() - 1];
    cout << answer << endl;

    return 0;
}
