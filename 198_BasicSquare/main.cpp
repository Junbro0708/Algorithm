#include <iostream>

/*
 * [198] 프로그래머스 Level 2 멀쩡한 사각형
 */

using namespace std;

long long int GCD(int a, int b){
    long long c;
    while(b != 0){
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

long long solution(int w,int h) {
    long long W = w;
    long long H = h;
    long long tmp = (w + h) - GCD(w, h);

    return (W * H) - tmp;
}

int main(){
    cout << solution(8, 12);
}
