#include <iostream>

/*
 * [152] 백준 4673번 셀프 넘버
 */

using namespace std;

#define N 10001
bool isCheck[N];

int Solution(int num){
    int sum = num;
    while(num){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    for(int i = 0; i < N; i++){
        int n = Solution(i);
        if(n <= N) isCheck[n] = true;
    }

    for(int i = 0; i < N; i++)
        if(!isCheck[i]) cout << i << "\n";
    return 0;
}
