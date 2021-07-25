#include <iostream>
#include <vector>

/*
 * [93] 백준 15649번 N과 M (2)
 */

using namespace std;

int N, M;
vector<int> answer;
bool check[8];

void DFS(int count, int num){
    if(count == M){
        for(int i = 0; i < answer.size(); i++){
            cout << answer[i] << " ";
        }
        cout << "\n";
        return;
    }else{
        for(int j = num; j <= N; j++){
            if(!check[j]){
                check[j] = true;
                answer.push_back(j);
                DFS(count + 1, j + 1);
                answer.pop_back();
                check[j] = false;
            }
        }
    }
}

int main() {
    cin >> N >> M;
    DFS(0, 1);
    return 0;
}
