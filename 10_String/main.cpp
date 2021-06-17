#include <iostream>
#include <vector>

/*
 * 백준 1120번 문자열
 */

using namespace std;

int main() {
    int front = 0, back = 0;
    string a, b;

    cin >> a >> b;

    for(int i = 0; i < a.length(); i++){
        if(a[i] != b[i]){
            front++;
        }
        if(a[a.length() - i] != b[b.length() - i]){
            back++;
        }
    }

    if(front >= back){
        cout << back;
    }else{
        cout << front;
    }

    return 0;
}
