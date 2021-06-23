#include <iostream>

/*
 * 프로그래머스 별 찍기
 */

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
