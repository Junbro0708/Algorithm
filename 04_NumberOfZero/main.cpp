#include <iostream>
#include "stdio.h"

// 백준 11170번 0의 개수

using namespace std;

int main() {
    int T, N, M;
    int cnt = 0;
    int empty = 0;

    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N;
        cin >> M;

        for(int j = N; j < M; j++){
            empty = j;
            while(empty <= 0){
                if(empty % 10 == 0){
                    cnt++;
                }
                empty = empty / 10;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
