#include <iostream>

/*
 * [100] 백준 18290번 NM과 K (1)
 */

using namespace std;

int N, M, K;

int answer = -1e4;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int arr[10][10];
bool check[10][10];

void DFS(int count, int sum){
    if(count == K){
        if(answer < sum) answer = sum;
        return;
    }else{
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(!check[i][j]){
                    bool ok = true;
                    for(int z = 0; z < 4; z++){
                        int nx = i + dx[z];
                        int ny = j + dy[z];
                        if(nx >= 0 && nx < N && ny >= 0 && ny < M)
                            if(check[nx][ny]) ok = false;
                    }
                    if(ok) {
                        check[i][j] = true;
                        DFS(count + 1, sum+arr[i][j]);
                        check[i][j] = false;
                    }
                }
            }
        }
    }
}

int main() {
    cin >> N >> M >> K;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];
        }
    }
    DFS(0, 0);
    cout << answer << "\n";
    return 0;
}
