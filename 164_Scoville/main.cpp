#include <string>
#include <vector>
#include <queue>

/*
 * [164] 프로그래머스 Level2 더 맵게
 */

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> arr(scoville.begin(), scoville.end());

    while(arr.size() > 1 && arr.top() < K){
        int first = arr.top();
        arr.pop();
        int second = arr.top();
        arr.pop();

        arr.push(first + (second * 2));
        answer++;
    }

    if(arr.top() < K) return -1;
    else return answer;
}