#include <vector>
#include <algorithm>
#include <iostream>

/*
 * [157] 프로그래머스 Level2 구명 보트
 */

using namespace std;

int solution(vector<int> people, int limit) {
    sort(people.begin(), people.end());
    int answer = 0, idx = 0;
    while(people.size() > idx){
        int heavy = people.back();
        people.pop_back();
        if(people[idx] + heavy <= limit){
            idx++;
            answer++;
        }else answer++;
    }
    return answer;
}

int main(){
    cout << solution({70, 50, 80, 50}, 100) << "\n";
}