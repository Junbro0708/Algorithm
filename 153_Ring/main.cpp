#include <iostream>

/*
 * [153] 백준 5555번 반지
 */

using namespace std;

int main() {
    string word;
    cin >> word;

    int N, cnt = 0;
    cin >> N;

    while (N--){
        string temp;
        cin >> temp;

        temp = temp + temp;
        if(temp.find(word) != string::npos) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}
