#include <iostream>

/*
 * [243] 백준 10872번 팩토리얼
 */

using namespace std;

int N;

int Factorial(int num){
    if(num == 1 || num == 0)
        return 1;
    return num * Factorial(num - 1);
}
int main() {
    cin >> N;
    cout << Factorial(N);
    return 0;
}
