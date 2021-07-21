#include <iostream>
#include <cmath>

/*
 * [82] 백준 6588번 골드바흐의 추측
 */

using namespace std;

bool isPrime(int num){
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int input = 1, a, b;
    bool success = false;

    while (input){
        cin >> input;
        for(int i = 1; i < input / 2; i++){
            a = (i * 2) + 1;
            b = input - a;
            if(isPrime(a) && isPrime(b)){
                cout << input << " = " << a << " + " << b << "\n";
                success = true;
                break;
            }
        }
        if(!success) cout << "Goldbach's conjecture is wrong." << "\n";
    }
    return 0;
}
