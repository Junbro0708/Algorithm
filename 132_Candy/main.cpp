#include <iostream>

/*
 * [132] 백준 1812번 사탕
 */

using namespace std;

int main() {
    int N, sum = 0;
    int arr[1000];

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    sum /= 2;
    for(int i = 0; i < N; i++){
        int temp = 0;
        for(int j = 0; j < N; j += 2){
            temp += arr[(i+j) % N];
        }
        cout << temp - sum << "\n";
    }
    return 0;
}
