#include <iostream>
#include <map>

/*
 * [185] 백준 17219번 비밀번호 찾기
 */

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, M;
    cin >> N >> M;

    map<string, string> list;
    for(int i = 0; i < N; i++){
        string A, B;
        cin >> A >> B;
        list.insert({A, B});
    }

    for(int i = 0; i < M; i++){
        string C;
        cin >> C;
        cout << list[C] << "\n";
    }
    return 0;
}
