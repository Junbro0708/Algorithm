#include <iostream>

/*
 * [88] 백준 1476번 날짜 계산
 */

using namespace std;

int main() {
    int E, S, M, year = 1;
    cin >> E >> S >> M;

    while(true){
        if((year-E) % 15 == 0 && (year-S) % 28 == 0 && (year-M) % 19 == 0) break;
        year += 1;
    }
    cout << year << "\n";
    return 0;
}
