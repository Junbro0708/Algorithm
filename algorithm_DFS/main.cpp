#include <iostream>
#include <cstring>

using namespace std;

#define MAX_N 10
int N, E;
int Graph[MAX_N][MAX_N];
bool Visited[MAX_N];

int main() {
    cin >> N >> E;
    memset(Visited, 0, sizeof(Visited));
    memset(Graph, 0, sizeof(Graph)); // 간선 초기화

    for(int i = 0; i < E; ++i){
        int u, v;
        cin >> u >> v;
        Graph[u][v] = Graph[v][u] = 1; // 노드를 만들때 간선 정보를 담는 법
    }
    DFS(0);
    return 0;
}
