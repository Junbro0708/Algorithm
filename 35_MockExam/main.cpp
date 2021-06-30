#include <algorithm>
#include <string>
#include <vector>

/*
 * [35] 프로그래머스 모의고사
 */

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> arr3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

    int n1 = 0, n2 = 0, n3 = 0;

    for(int i = 0; i < answer.size(); i++){
        if(arr1[i % 5] == answer[i]) n1++;
        if(arr2[i % 8] == answer[i]) n2++;
        if(arr3[i % 10] == answer[i]) n3++;
    }

    vector<int> score = {n1, n2, n3};
    int max = *max_element(score.begin(), score.end());

    for(int i = 0; i < score.size(); i++){
        if(score[i] == max) answer.push_back(i+1);
    }

    return answer;
}

int main() {
    solution({1, 2, 3, 4, 5});
}
