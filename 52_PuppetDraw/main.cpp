#include <iostream>
#include <vector>

/*
 * [52] 프로그래머스 카카오 크레인 인형뽑기 게임
 */

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> puppet;

    for(int i = 0; i < moves.size(); i++){
        for(int j = 0; j < board[0].size(); j++){
            if(board[j][moves[i]-1] != 0){
                puppet.push_back(board[j][moves[i]-1]);
                board[j][moves[i]-1] = 0;
                break;
            }
        }
    }

    for(int i = 0; i < puppet.size() - 1; i++){
        if(puppet[i] == puppet[i+1]){
            puppet.erase(puppet.begin() + i);
            puppet.erase(puppet.begin() + i);
            puppet.insert(puppet.begin(), 0);
            puppet.insert(puppet.begin(), 0);
            answer += 2;
        }
    }
    return answer;
}

int main() {
    std::cout << solution({{0,0,0,0,0},
                                 {0,0,1,0,3},
                                 {0,2,5,0,1},
                                 {4,2,4,4,2},
                                 {3,5,1,3,1}},
                          {1,5,3,5,1,2,1,4}) << std::endl;
    return 0;
}
