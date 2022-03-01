#include <iostream>

/*
 * [241] 백준 9663번 N-Queen
 */

using namespace std;

#define MAX 15 //입력 제한

int N, cnt = 0; // 입력 받을 크기와 퀸을 놓는 방법 카운트 변수
int queen_loc[MAX]; // 퀸의 위치이고 배열의 인덱스가 행, 값이 열임

bool Check(int row_index){
    for(int i = 0; i < row_index; ++i){ // 지금까지 놓았던 퀸의 행 인덱스
        if(queen_loc[i] == queen_loc[row_index]) return false; // 지금까지 놓았던 퀸의 열을 비교
        if(row_index - i == abs(queen_loc[row_index] - queen_loc[i])) return false; // 지금까지 놓았던 퀸의 대각선을 비교 (비교할때 각각의 좌표끼리 뺀게 같으면 대각선에 해당)
    }
    return true; // 위 조건을 모두 통과해야 놓을 수 있는 것
}

void DFS(int row_index){ // 다음 놓을 행의 인덱스를 받아옴
    if(row_index == N){ // 끝 행에 다다르면 모든 퀸을 놓은 거니까 카운트 해줌
        cnt++;
        return;
    }else{
        for(int col_index = 0; col_index < N; ++col_index){ // 행의 인덱스에서 놓을 열을 결정
            queen_loc[row_index] = col_index; // 일단 해당 행에 열의 인덱스를 넣어보고
            if(Check(row_index)){ //체크를 돌려 놓을 수 있는거면 다음 행으로 이동하고 그럴 수 없으면 패스해서 다음 열의 인덱스로 이동
                DFS(row_index + 1);
            }
        }
    }
}

int main() {
    cin >> N;
    DFS(0);
    cout << cnt << "\n";
    return 0;
}
