#include <vector>

/*
 * [158] 프로그래머스 Level2 타겟 넘버
 */

using namespace std;

int answer = 0;

void DFS(vector<int> numbers, int target, int sum, int count){
    if(count == numbers.size()){
        if(sum == target) answer++;
        return;
    }
    DFS(numbers, target, sum + numbers[count], count + 1);
    DFS(numbers, target, sum - numbers[count], count + 1);
}

int solution(vector<int> numbers, int target) {
    DFS(numbers, target, 0, 0);
    return answer;
}

int main(){
    solution({1, 1, 1, 1, 1}, 3);
}