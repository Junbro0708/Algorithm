#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [148] 백준 2535번 아시아 정보올림피아드
 */

using namespace std;

int main() {
    int N, arr[1001] = {0,};
    int score, country, number;
    vector<pair<int, pair<int, int>>> students;

    cin >> N;
    while (N--) {
        cin >> country >> number >> score;
        students.push_back(make_pair(score, make_pair(country, number)));
    }

    sort(students.begin(), students.end(), greater<>());

    int i = 0, cnt = 3;
    while (cnt) {
        if (arr[students[i].second.first] < 2) {
            cout << students[i].second.first << " " << students[i].second.second << "\n";
            arr[students[i].second.first]++;
            cnt--;
        }
        i++;
    }
    return 0;
}