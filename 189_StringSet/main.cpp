#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

/*
 * [189] 백준 14425번 문자열 집합
 */

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, M, cnt = 0;
    map<string, bool> list;

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        string temp;
        cin >> temp;
        list[temp] = true;
    }

    for(int i = 0; i < M; i++){
        string temp;
        cin >> temp;
        if(list[temp]) cnt++;
    }

    cout << cnt << "\n";
    return 0;
}

//    int N, M, cnt = 0; // 시간 초과
//    vector<string> s;
//    vector<string> list;
//
//    cin >> N >> M;
//    for(int i = 0; i < N; i++){
//        string temp;
//        cin >> temp;
//        s.push_back(temp);
//    }
//    sort(s.begin(), s.end());
//    for(int i = 0; i < M; i++){
//        string temp;
//        cin >> temp;
//        list.push_back(temp);
//    }
//    sort(list.begin(), list.end());
//
//    for(int i = 0; i < N; i++){
//        if(find(list.begin(), list.end(), s[i]) != list.end())
//            cnt++;
//    }
//    cout << cnt << "\n";
//    return 0;
//}
