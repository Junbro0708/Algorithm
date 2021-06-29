#include <iostream>
#include <vector>

/*
 * 프로그래머스 행렬의 덧셈
 */

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;

    for(int i = 0; i < arr1.size(); i++){
        vector<int> temp;
        for(int j = 0; j < arr1[0].size(); j++){
            temp.push_back(arr1[i][j] + arr2[i][j]);
        }
        answer.push_back(temp);
    }
    return answer;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
