#include <iostream>
#include <vector>

/*
 * [54] 프로그래머스 체육복
 */

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> students(n, 1);
    for(int lost_s : lost) students[lost_s - 1] -= 1;
    for(int reserve_s : reserve) students[reserve_s - 1] += 1;

    for(int i = 0; i < students.size(); i++){
        if(!students[i]){
            if(i != students.size() - 1 && students[i+1] == 2){
                students[i+1]--;
                students[i]++;
            } else if(i > 0 && students[i-1] == 2){
                students[i-1]--;
                students[i]++;
            }
        }
    }

    for(int check : students) if(check != 0) answer++;
    return answer;
}

int main() {
    std::cout << solution(5, {2, 4}, {1, 3, 5}) << std::endl;
    return 0;
}
