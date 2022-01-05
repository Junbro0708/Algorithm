#include <vector>
#include <iostream>
#include <algorithm>

/*
 * 프로그래머스 211번 level1 최소직사각형
 */

using namespace std;

int solution(vector<vector<int>> sizes) {
    int first = 0, second = 0;

    for(int i = 0; i < sizes.size(); i++){
        sort(sizes[i].begin(), sizes[i].end());
        if(first < sizes[i][0]) first = sizes[i][0];
        if(second < sizes[i][1]) second = sizes[i][1];
    }
    return first * second;
}

int main() {
    cout << solution({{60, 50},{30, 70},{60, 30},{80, 40}}) << endl;
    return 0;
}
