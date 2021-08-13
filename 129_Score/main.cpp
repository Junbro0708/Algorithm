#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [129] 백준 2822번 점수 계산
 */

using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.first > b.first;
}

int main() {
    int sum = 0;
    vector<pair<int, int>> arr;
    vector<int> answer;

    for(int i = 0; i < 8; i++){
        int temp;
        cin >> temp;
        arr.push_back(make_pair(temp, i+1));
    }

    sort(arr.begin(), arr.end(), cmp);
    for(int i = 0; i < 5; i++) {
        sum += arr[i].first;
        answer.push_back(arr[i].second);
    }
    sort(answer.begin(), answer.end());

    cout << sum << "\n";
    for(int i = 0; i < answer.size(); i++) cout << answer[i] << " ";

    return 0;
}
