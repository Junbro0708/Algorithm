#include <iostream>
#include <vector>
#include <climits>

/*
 * [240] 백준 14888번 연산자 끼워 넣기 - 백 트래킹
 */

using namespace std;

#define MAX 100

int N;
int min_ = INT_MAX, max_ = INT_MIN;
vector<int> Board, Operator;
bool visited[MAX];

void DFS(int index, int sum){
    if(index == N - 1){
        if(max_ <= sum) max_ = sum;
        if(min_ >= sum) min_ = sum;
        return;
    }else{
        for(int i = 0; i < Operator.size(); ++i){
            if(visited[i]) continue;
            visited[i] = true;
            switch (Operator[i]) {
                case 1:
                    DFS(index + 1, sum + Board[index+1]);
                    break;
                case 2:
                    DFS(index + 1, sum - Board[index+1]);
                    break;
                case 3:
                    DFS(index + 1, sum * Board[index+1]);
                    break;
                case 4:
                    DFS(index + 1, sum / Board[index+1]);
                    break;
                default:
                    break;
            }
            visited[i] = false;
        }
    }
}

int main() {
    cin >> N;
    for(int i = 0; i < N; ++i){
        int temp;
        cin >> temp;
        Board.push_back(temp);
    }
    for(int j = 1; j <= 4; ++j){
        int temp;
        cin >> temp;
        for(int k = 0; k < temp; ++k){
            Operator.push_back(j);
        }
    }
    DFS(0, Board[0]);
    cout << max_ << "\n" << min_;
    return 0;
}
