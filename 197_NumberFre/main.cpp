#include <iostream>

/*
 * [197] 백준 14912번 숫자 빈도수
 */

using namespace std;

int main() {
    int N, D, cnt = 0;
    cin >> N >> D;

    for(int i = 1; i <= N; i++){
        int temp = i;
        while (temp){
            if(temp % 10 == D) cnt++;
            temp /= 10;
        }
    }
    cout << cnt << "\n";
    return 0;
}
