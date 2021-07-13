#include <iostream>
#include <string>
#include <vector>

/*
 * [61] 프로그래머스 카카오 키패드 누르기
 */

using namespace std;

typedef struct coord{
    int x;
    int y;
} Coord;

string solution(vector<int> numbers, string hand) {
    string answer = "";

    Coord left, right;
    left.x = 0, left.y = 3;
    right.x = 2; right.y = 3;

    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] % 3 == 1){
            answer += "L";
            left.x = 0;
            if(numbers[i] == 1) left.y = 0;
            else if(numbers[i] == 4) left.y = 1;
            else if(numbers[i] == 7) left.y = 2;
        }else if(numbers[i] % 3 == 0 && numbers[i] != 0){
            answer += "R";
            right.x = 2;
            if(numbers[i] == 3) right.y = 0;
            else if(numbers[i] == 6) right.y = 1;
            else if(numbers[i] == 9) right.y = 2;
        }else{
            Coord tmp;
            tmp.x = 1;
            if(numbers[i] == 2) tmp.y = 0;
            else if(numbers[i] == 5) tmp.y = 1;
            else if(numbers[i] == 8) tmp.y = 2;
            else if(numbers[i] == 0) tmp.y = 3;

            int leftDis = abs(tmp.x - left.x) + abs(tmp.y - left.y);
            int rightDis = abs(tmp.x - right.x) + abs(tmp.y - right.y);

            if(leftDis < rightDis){
                answer += "L";
                left.x = tmp.x;
                left.y = tmp.y;
            }else if(leftDis > rightDis){
                answer += "R";
                right.x = tmp.x;
                right.y = tmp.y;
            }else if(leftDis == rightDis){
                if(hand == "left"){
                    answer += "L";
                    left.x = tmp.x;
                    left.y = tmp.y;
                }else{
                    answer += "R";
                    right.x = tmp.x;
                    right.y = tmp.y;
                }
            }
        }
    }
    return answer;
}

int main() {
    std::cout << solution({1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5}, "right") << std::endl;
    return 0;
}
