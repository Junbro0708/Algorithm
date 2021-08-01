#include <iostream>

/*
 * [105] 백준 1439번 뒤집기
 */

using namespace std;

int main() {
    string s = "";
    cin >> s;
    int cnt_0 = 0, cnt_1 = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '0' && (s[i+1] == '1' || s[i+1] == NULL)) cnt_0++;
        if(s[i] == '1' && (s[i+1] == '0' || s[i+1] == NULL)) cnt_1++;
    }
    cout << min(cnt_0, cnt_1);
    return 0;
}
