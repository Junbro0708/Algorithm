#include <iostream>
#include <map>

/*
 * [149] 백준 1620번 나는야 포켓몬 마스터 이다솜
 */

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, M;
    string pokemon[100001];
    map<string, int> dic;

    cin >> N >> M;
    for(int i = 1; i <= N; i++){
        string temp;
        cin >> temp;
        dic.insert(make_pair(temp, i));
        pokemon[i] = temp;
    }

    while(M--){
        string temp;
        cin >> temp;
        if('A' <= temp[0] && temp[0] <= 'Z'){
            cout << dic[temp] << "\n";
        }else{
            int num = stoi(temp);
            cout << pokemon[num] << "\n";
        }
    }
    return 0;
}
