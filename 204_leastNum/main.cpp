#include <iostream>

/*
 * [204] 백준 1312번 소수
 */

using namespace std;

int main() {
    int A, B, N, res = 0;
    cin >> A >> B >> N;

    if(A % B == 0){
        cout << 0;
        return 0;
    }
    if(A > B) A = A % B;
    for(int i = 0; i < N; i++){
        A *= 10;
        res = (int)(A / B);
        A = A % B;
    }
    cout << res << "\n";
}
