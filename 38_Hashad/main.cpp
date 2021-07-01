#include <iostream>

/*
 * [38] 프로그래머스 하샤드 수
 */

using namespace std;

bool solution(int x) {
    int num = 0, y = x;
    while (x > 0){
        num += x % 10;
        x /= 10;
    }
    if(y % num == 0) return true;
    else return false;
}

int main() {
    std::cout << solution(12) << std::endl;
    return 0;
}
