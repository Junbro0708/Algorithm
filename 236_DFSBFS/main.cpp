#include <iostream>
#include <stack>
#include <queue>
#include <cstring>

/*
 * [236] 백준 1260번 DFS와 BFS
 */

using namespace std;

#define MAXINT 1001

int N, M, V;
int Board[MAXINT][MAXINT];
bool Visited[MAXINT];

void DFS(int node){
    stack<int> myStack;
    myStack.push(node);

    while(!myStack.empty()){
        int pos = myStack.top();
        myStack.pop();

        if(Visited[pos]) continue;
        Visited[pos] = true;
        cout << pos << " ";

        for(int next = N; next > 0; --next){
            if(Visited[next]) continue;
            if(Board[pos][next] == 0) continue;
            myStack.push(next);
        }
    }
    cout << "\n";
}

void BFS(int node){
    queue<int> myQueue;
    myQueue.push(node);
    Visited[node] = true;

    while(!myQueue.empty()){
        int pos = myQueue.front();
        myQueue.pop();

        cout << pos << " ";

        for(int next = 1; next <= N; ++next){
            if(Visited[next]) continue;
            if(Board[pos][next] == 0) continue;
            myQueue.push(next);
            Visited[next] = true;
        }
    }
}

int main() {
    cin >> N >> M >> V;

    for(int i = 0; i < M; ++i){
        int temp, temp2;
        cin >> temp >> temp2;
        Board[temp][temp2] = Board[temp2][temp] = 1;
    }
    DFS(V);
    memset(Visited, false, sizeof(Visited));
    BFS(V);
    return 0;
}
