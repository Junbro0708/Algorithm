#include <iostream>
#include <string>
#include <vector>

/*
 * 프로그래머스 카카오 [1차] 프렌즈4블록
 */

using namespace std;

int solution(int m, int n, vector<string> board) {
    int answer = 0;
    bool flag = false;

    while(!flag){
        flag = true;
        vector<vector<bool>> visit(m, vector<bool>(n));

        for(int i = 0; i < m-1; i++){
            for(int j = 0; j < n-1; j++){
                if(board[i][j] == 0) continue;
                if ((board[i][j] == board[i][j + 1])&&(board[i][j]== board[i + 1][j])&&(board[i][j]== board[i + 1][j + 1])) {
                    visit[i][j] = true;
                    visit[i][j+1] = true;
                    visit[i+1][j] = true;
                    visit[i + 1][j + 1] = true;
                    flag = false;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (visit[i][j]) {
                    answer++;
                    for (int k = i-1; k >=0; k--) {
                        board[k + 1][j] = board[k][j];
                        board[k][j] = 0;
                    }
                }
            }
        }
    }
    return answer;
}

int main() {
    std::cout << solution(4, 5, {"CCBDE", "AAADE", "AAABF", "CCBBF"}) << std::endl;
    return 0;
}
