#include <iostream>

/*
 * [108] 백준 1789번 수들의 합
 */

using namespace std;

int main() {
    long long int S, N = 0;
    long long int sum = 0;
    cin >> S;

    for(int i = 1; sum <= S; i++){
        if(sum + i <= S){
            sum += i;
            N++;
        }else if(sum + i > S){
            sum += i;
        }
    }
    cout << N;
    return 0;
}
