#include <iostream>
#include "stdio.h"

// 백준 1094번 막대기 문제

using namespace std;

int main() {
    int x, length = 64, cnt = 0;
    cin >> x;

    while (x > 0){
        if(x < length){
            length /= 2;
        }else{
            x -= length;
            cnt++;
        }
    }
    cout << cnt << endl;
}
