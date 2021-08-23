#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>

/*
 * [161] 백준 2581번 소수
 */

using namespace std;

bool isPrime(int num){
    if(num <= 1)
        return false;
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int M, N;
    vector<int> arr;
    cin >> M >> N;

    for(int i = M; i <=N; i++){
        if(isPrime(i))
            arr.push_back(i);
    }

    if(arr.empty()) cout << "-1" << "\n";
    else{
        cout << accumulate(arr.begin(), arr.end(), 0) << "\n";
        cout << arr[0] << "\n";
    }
    return 0;
}
