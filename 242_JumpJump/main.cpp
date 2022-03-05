#include <iostream>
#include <queue>

/*
 * [242] 백준 11060번 점프 점프
 */

using namespace std;

#define MAX 1000

int N;
int Board[MAX];
bool Visited[MAX];

void BFS(){
    queue<pair<int, int>> myQueue;
    myQueue.push({0, 0});
    Visited[0] = true;

    while(!myQueue.empty()){
        int index = myQueue.front().first;
        int cnt = myQueue.front().second;
        myQueue.pop();

        if(index == N - 1){
            cout << cnt << "\n";
            return;
        }

        for(int i = 1; i <= Board[index]; ++i){
            if(Visited[index + i]) continue;
            if(index + i > N - 1) continue;
            Visited[index + i] = true;
            myQueue.push({index + i, cnt + 1});
        }
    }
    cout << - 1;
}

int main() {
    cin >> N;
    for(int i = 0; i < N; ++i){
        int temp;
        cin >> temp;
        Board[i] = (temp);
    }
    BFS();
    return 0;
}
