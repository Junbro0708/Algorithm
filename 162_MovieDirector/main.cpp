#include <iostream>
#include <string>

/*
 * [162] 백준 1436번 영화감독 숌
 */

using namespace std;

int main() {
    int N, cnt = 0, flag = 666;
    cin >> N;

    while(N != cnt){
        if(to_string(flag).find("666") != string::npos)
            cnt++;
        if(N == cnt) cout << flag << "\n";
        flag++;
    }
    return 0;
}
