#include <iostream>
#include <vector>

/*
 * [92] 백준 15649번 N과 M (1)
 */

//void go(int cnt) {
//    if (cnt == m) {
//        //출력
//    }
//
//    for (int k = 1; k <= n; k++) {
//        //먹고
//        //재귀함수
//        //뱉어내고
//    }
//}

using namespace std;

int N, M;
vector<int> answer;
bool check[8];

void DFS(int count){
    if(M == count){
        for(int i = 0; i < answer.size(); i++){
            cout << answer[i] << " ";
        }
        cout << "\n";
        return;
    }else{
        for(int j = 1; j <= N; j++){
            if(!check[j]) {
                check[j] = true;
                answer.push_back(j);
                DFS(count + 1);
                answer.pop_back();
                check[j] = false;
            }
        }
    }
}

int main() {
    cin >> N >> M;
    DFS(0);
    return 0;
}
