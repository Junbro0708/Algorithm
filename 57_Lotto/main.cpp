#include <iostream>
#include <vector>

/*
 * [57] 프로그래머스 로또의 최고 순위와 최저 순위
 */

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int cnt = 0, cnt_zero = 0;

    for(int i = 0; i < lottos.size(); i++){
        if(lottos[i] == 0) cnt_zero++;
        for(int j = 0; j < lottos.size(); j++){
            if(lottos[i] == win_nums[j]) cnt++;
        }
    }
    cnt_zero += cnt;

    if(cnt < 2) cnt = 6;
    else cnt = 6 - cnt + 1;

    if(cnt_zero < 2) cnt_zero = 6;
    else cnt_zero = 6 - cnt_zero + 1;

    answer.push_back(cnt_zero);
    answer.push_back(cnt);

    return answer;
}

int main() {
    vector<int> answer;
    answer = solution({44, 1, 0, 0, 31, 25}, {31, 10, 45, 1, 6, 19});

    for(int i = 0; i < answer.size(); i++)
        cout << answer[i] << " ";

    return 0;
}
