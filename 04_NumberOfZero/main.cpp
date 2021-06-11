#include <iostream>
#include "stdio.h"

// 백준 11170번 0의 개수

using namespace std;

int ReturnZero(int N, int M){
    int cnt = 0;
    int num;

    while(N < M + 1){
        num = N;
        while(true){
            if(num % 10 == 0){
                cnt++;
            }
            num /= 10;
            if(num == 0){
                break;
            }
        }
        N++;
    }

    return cnt;
}

int main() {
    int T, N, M;
    int cnt;

    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N;
        cin >> M;

        cnt = ReturnZero(N, M);

        cout << cnt << endl;
    }


    return 0;
}
