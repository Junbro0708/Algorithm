#include <iostream>

/*
 * [74] 백준 4375번 1
 */

using namespace std;

int main() {
    int num;
    while(cin >> num){
        int cnt = 1;
        long long int K = 1;

        while(true){
            if(K % num == 0){
                cout << cnt << endl;
                break;
            }
            K %= num;
            K = (K * 10) + 1;
            cnt += 1;
        }
    }
    return 0;
}
