#include <iostream>
#include <queue>

/*
 * [232] 백준 2606번 바이러스
 */

using namespace std;

#define MAX 101

int N, M;
int Coms[MAX][MAX];
bool Visited[MAX] = {false, };

void BFS(int node){
    queue<int> myQueue;
    myQueue.push(node);
    Visited[node] = true;

    int cnt = -1;
    while(!myQueue.empty()){
        int cur = myQueue.front();
        myQueue.pop();

        cnt++;
        for(int next = 1; next <= N; ++next){
            if(Visited[next]) continue;
            if(Coms[cur][next] == 0) continue;
            myQueue.push(next);
            Visited[next] = true;
        }
    }
    cout << cnt;
}

int main() {
    cin >> N >> M;

    for(int i = 0; i < M; ++i){
        int temp, temp2;
        cin >> temp >> temp2;
        Coms[temp][temp2] = Coms[temp2][temp] = 1;
    }
    BFS(1);
    return 0;
}
