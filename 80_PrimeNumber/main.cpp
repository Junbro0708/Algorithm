#include <iostream>

/*
 * [80] 백준 1929번 소수 구하기
 */

using namespace std;

int num = 1000000;
int arr[1000001];

int main() {
    int N, M;
    cin >> M >> N;

    for(int i = 2; i <= num; i++) arr[i] = i;

    for(int j = 2; j <= num; j++){
        if(arr[j] == 0) continue;
        for(int k = 2 * j; k <= num; k+=j){
            arr[k] = 0;
        }
    }

    for(int l = M; l <= N; l++){
        if(arr[l] != 0) cout << arr[l] << "\n";
    }

    return 0;
}
