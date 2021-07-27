#include <iostream>
#include <vector>

using namespace std;

/*
 * [94] 백준 15651번 N과 M (3)
 */

int N, M;
vector<int> answer;

void Check(int cnt){
    if(cnt == M){
        for(int i = 0; i < M; i++)
            cout << answer[i] << " ";
        cout << "\n";
        return;
    }else{
        for(int j = 1; j <= N; j++){
            answer.push_back(j);
            Check(cnt + 1);
            answer.pop_back();
        }
    }
}

int main() {
    cin >> N >> M;
    Check(0);
    return 0;
}
