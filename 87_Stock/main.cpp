#include <vector>
#include <iostream>

/*
 * [87] 프로그래머스 주식가격
 */

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size(), 0);

    for(int i = 0; i < prices.size() - 1; i++){
        for(int j = i + 1; j < prices.size(); j++){
            if(prices[i] <= prices[j]) answer[i]++;
            else{
                answer[i]++;
                break;
            }
        }
    }
    return answer;
}

int main() {
    vector<int> answer = solution({1, 2, 3, 2, 3});

    for(int i = 0; i < answer.size(); i++){
        cout << answer[i] << " ";
    }
    return 0;
}
