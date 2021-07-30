#include <iostream>
#include <algorithm>

/*
 * [101] 백준 14501번 퇴사
 */

using namespace std;

int N, answer = 0;
int T[16], P[16];

void DFS(int count, int sum){
    if(N + 1 == count){
        answer = max(answer, sum);
        return;
    }
    if(count + T[count] <= N + 1) DFS(count + T[count], sum + P[count]);
    if(count <= N) DFS(count + 1, sum);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> T[i] >> P[i];
    DFS(1,0);
    cout << answer;
}


