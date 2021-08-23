#include <iostream>
#include <map>

/*
 * [163] 백준 1302번 베스트셀러
 */

using namespace std;

int main() {
    map<string, int> book;
    int N, cnt = 0;
    cin >> N;

    while(N--){
        string temp;
        cin >> temp;
        book[temp]++;
    }

    for(auto p : book) cnt = max(cnt, p.second);
    for(auto p : book){
        if(p.second == cnt){
            cout << p.first << "\n";
            break;
        }
    }
    return 0;
}
