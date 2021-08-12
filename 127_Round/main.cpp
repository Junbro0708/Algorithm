#include <iostream>

/*
 * [127] 백준 4539번 반올림
 */

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;

    while (N--){
        int num;
        cin >> num;

        if (num > 10) num = (num + 5) / 10 * 10;
        if (num > 100) num = (num + 50) / 100 * 100;
        if (num > 1000) num = (num + 500) / 1000 * 1000;
        if (num > 10000) num = (num + 5000) / 10000 * 10000;
        if (num > 100000) num = (num + 50000) / 100000 * 100000;
        if (num > 1000000) num = (num + 500000) / 1000000 * 1000000;
        if (num > 10000000) num = (num + 5000000) / 10000000 * 10000000;

        cout << num << '\n';
    }
    return 0;
}
