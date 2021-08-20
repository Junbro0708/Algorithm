#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [150] 백준 1822번 차집합
 */

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    vector<long long int> arr_A(A);
    for(int i = 0; i < A; i++) cin >> arr_A[i];

    vector<long long int> arr_B(B);
    for(int i = 0; i < B; i++) cin >> arr_B[i];

    sort(arr_A.begin(), arr_A.end());
    sort(arr_B.begin(), arr_B.end());

    vector<long long int> buff(arr_A.size() + arr_B.size());
    auto iter = set_difference(arr_A.begin(), arr_A.end(), arr_B.begin(), arr_B.end(), buff.begin());
    buff.erase(iter, buff.end());

    cout << buff.size() << "\n";
    for(int i = 0; i < buff.size(); i++) cout << buff[i] << " ";
    return 0;
}
