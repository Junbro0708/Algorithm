#include <string>
#include <vector>
#include <iostream>
#include <queue>

/*
 * 프로그래머스 level 2 기능 개발
 */

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;

    for(int i = 0; i < progresses.size(); i++){
        int cnt = (100 - progresses[i]) / speeds[i];
        if((progresses[i] + cnt * speeds[i]) != 100) cnt++;
        progresses[i] = cnt;
    }

    q.push(progresses[0]);

    for(int j = 1; j < progresses.size(); j++){
        if(q.front() >= progresses[j]) q.push(progresses[j]);
        else{
            answer.push_back(q.size());
            while(!q.empty()) q.pop();
            q.push(progresses[j]);
        }
    }
    if(!q.empty()) answer.push_back(q.size());
    return answer;
}

int main(){
    vector<int> progresses = {93,30,54,60}, speeds = {1,30,5,40};
    vector<int> answer;

    answer = solution(progresses, speeds);

    for(int i = 0; i < answer.size(); i++){
        cout << answer[i] << " ";
    }
}