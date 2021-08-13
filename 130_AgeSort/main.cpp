#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [130] 백준 10814번 나이순 정렬
 */

using namespace std;

bool compare(pair<int,string> a, pair<int,string> b)
{
    return a.first < b.first;
}

int main() {
    int N;
    vector<pair<int, string>> arr;
    cin >> N;
    while (N--){
        int temp_N;
        string temp_S;
        cin >> temp_N >> temp_S;

        arr.push_back(make_pair(temp_N, temp_S));
    }
    stable_sort(arr.begin(), arr.end(), compare);

    for(int i = 0; i < arr.size(); i++)
        cout << arr[i].first << " " << arr[i].second << "\n";

    return 0;
}
