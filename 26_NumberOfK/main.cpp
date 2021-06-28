#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

/*
 * 프로그래머스 K번째 수
 */

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(int i = 0; i < commands.size(); i++){
        vector<int> temp;
        for(int j = commands[i][0] - 1; j < commands[i][1]; j++){
            temp.push_back(array[j]);
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp[commands[i][2] - 1]);
    }
    return answer;
}

int main() {
    for(int i = 0; i < solution({1, 5, 2, 6, 3, 7, 4},
                                {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}}).size(); i++){
        cout << solution({1, 5, 2, 6, 3, 7, 4},
                         {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}})[i] << endl;

    }
}
