#include <vector>
#include <map>
#include <iostream>

/*
 * [199] 프로그래머스 Level 2 위장
 */

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> list;

    for(int i = 0; i < clothes.size(); i++){
        list[clothes[i][1]]++;
    }

    for(auto it = list.begin(); it != list.end(); it++){
        answer *= it -> second + 1;
    }

    return answer - 1;
}

int main(){
    cout << solution({{"yellowhat", "headgear"}, {"bluesunglasses", "eyewear"}, {"green_turban", "headgear"}});
}