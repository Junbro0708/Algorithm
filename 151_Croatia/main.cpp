#include <iostream>

/*
 * [151] 백준 2941번 크로아티아 알파벳
 */

using namespace std;

int main() {
    int cnt = 0;
    string temp;
    cin >> temp;

    for(int i = 0; i < temp.length(); i++) {
        if (temp[i] == 'c') {
            if (temp[i + 1] == '=') {
                i++;
                cnt++;
            } else if (temp[i + 1] == '-') {
                i++;
                cnt++;
            } else {
                cnt++;
            }
        } else if (temp[i] == 'd') {
            if (temp[i + 1] == 'z' && temp[i + 2] == '=') {
                i += 2;
                cnt++;
            } else if (temp[i + 1] == '-') {
                i++;
                cnt++;
            } else {
                cnt++;
            }
        } else if (temp[i] == 'l') {
            if (temp[i + 1] == 'j') {
                i++;
                cnt++;
            } else {
                cnt++;
            }
        } else if (temp[i] == 'n') {
            if (temp[i + 1] == 'j') {
                i++;
                cnt++;
            } else {
                cnt++;
            }
        } else if (temp[i] == 's') {
            if (temp[i + 1] == '=') {
                i++;
                cnt++;
            } else {
                cnt++;
            }
        } else if (temp[i] == 'z') {
            if (temp[i + 1] == '=') {
                i++;
                cnt++;
            } else {
                cnt++;
            }
        } else{
            cnt++;
        }
    }

    cout << cnt << "\n";
    return 0;
}
