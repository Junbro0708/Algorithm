#include <iostream>
#include <vector>
#include <algorithm>

/*
 *  백준 1427번 소트인사이드
 */

using namespace std;

int main() {
    int num, a, b = 1;
    vector<int> Sort;

    cin >> num;

    while (num > 0){
        a = num % 10;
        Sort.push_back(a);
        num /= 10;
    }

    sort(Sort.begin(), Sort.end(), greater<int>());

    a = 0;

    for (int i = Sort.size(); i > 0; --i) {
        a += b * Sort[i - 1];
        b *= 10;
    }

    cout << a;

    return 0;
}
