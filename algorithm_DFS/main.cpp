#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

#define MAX_N 10
int N, E;
int Graph[MAX_N][MAX_N];
bool Visited[MAX_N];

/*
 * 예시
 * 입력 5 6
 *     0 1 0 2 1 3 1 4 2 4 3 4
 */

void DFS_reculsive(int node){
    Visited[node] = true;
    cout << node << " ";

    for(int next = 0; next < N; ++next){
        if(!Visited[next] && Graph[node][next]){
            DFS_reculsive(next);
        }
    }
}

void DFS_stack(int node){
    bool Visited_s[MAX_N] = {false, };
    stack<int> myStack;

    myStack.push(node);

    while (!myStack.empty()){
        int currentNode = myStack.top();
        myStack.pop();

        if(!Visited_s[currentNode])
            continue;

        Visited_s[currentNode] = true;
        cout << currentNode << " ";

        for(int next = 0; next < N; ++next){
            if(!Visited_s[next] && Graph[currentNode][next])
                myStack.push(next);
        }
    }
}

int main() {
    cin >> N >> E;
    memset(Visited, 0, sizeof(Visited));
    memset(Graph, 0, sizeof(Graph)); // 간선 초기화

    for(int i = 0; i < E; ++i){
        int u, v;
        cin >> u >> v;
        Graph[u][v] = Graph[v][u] = 1; // 노드를 만들때 간선 정보를 담는 법
    }
    DFS_reculsive(0);
    DFS_stack(0);
    return 0;
}
