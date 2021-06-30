#include <iostream>
#include <algorithm>
#include <vector>

/*
 * 프로그래머스 예산
 */

using namespace std;

int solution(vector<int> d, int budget) {
    int cnt = 0;
    sort(d.begin(), d.end());
    for(int i = 0; i < d.size(); i++){
        if(d[i] <= budget){
            budget -= d[i];
            cnt++;
        }else break;
    }
    return cnt;
}

int main() {
    std::cout << solution({1, 3, 2, 5, 4}, 9) << std::endl;
    return 0;
}
