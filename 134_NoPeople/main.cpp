#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

/*
 * [134] 백준 1764번 듣보잡
 */

using namespace std;

int main() {
    int N, M;
    string temp;
    set<string> arr_N, arr_M;

    cin >> N >> M;

    while (N--){
        cin >> temp;
        arr_N.insert(temp);
    }
    while (M--){
        cin >> temp;
        arr_M.insert(temp);
    }

    vector<string> intersection(arr_N.size() + arr_M.size());
    auto iter = set_intersection(arr_N.begin(), arr_N.end(), arr_M.begin(), arr_M.end(), intersection.begin());
    intersection.erase(iter, intersection.end());

    cout << intersection.size() << "\n";
    for(int i = 0; i < intersection.size(); i++) cout << intersection[i] << "\n";
    return 0;
}
