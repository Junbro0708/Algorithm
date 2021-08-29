#include <iostream>
#include <map>

/*
 * [190] 백준 10816번 숫자 카드 2
 */

using namespace std;

map<int, int> list;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, M;
    cin >> N;
    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        list[temp]++;
    }
    cin >> M;
    while (M--){
        int num;
        cin >> num;
        cout << list[num] << ' ';
    }
}
