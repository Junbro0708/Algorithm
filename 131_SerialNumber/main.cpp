#include <iostream>
#include <algorithm>
#include <string>

/*
 * [131] 백준 1431번 시리얼 번호
 */

using namespace std;

int str_cmp(const string& A, const string& B) {
    int A_size = A.size(), B_size = B.size();
    if (A_size != B_size) return A_size < B_size;

    int A_sum = 0, B_sum = 0;
    for (int idx = 0; idx < A_size; idx++){
        if ('0' <= A[idx] && A[idx] <= '9')    A_sum += A[idx] - '0';
        if ('0' <= B[idx] && B[idx] <= '9')    B_sum += B[idx] - '0';
    }
    if (A_sum != B_sum) return A_sum < B_sum;

    return A < B;
}

int main() {
    int N;
    cin >> N;
    string str_input[1001];
    for (int n_idx = 0; n_idx < N; n_idx++)
        cin >> str_input[n_idx];
    sort(str_input, str_input + N , str_cmp);

    for (int n_idx = 0; n_idx < N; n_idx++)
        cout << str_input[n_idx] << "\n";
    return 0;
}
