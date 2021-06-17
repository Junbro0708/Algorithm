#include <iostream>
#include <vector>

/*
 * 백준 1120번 문자열
 */

using namespace std;

int main() {
    int num = 50, temp;
    string a, b;

    cin >> a >> b;

    for(int i = 0; i < b.length() - a.length() + 1; i++){
        temp = 0;
        for(int j = 0; j < a.length(); j++){
            if(a[j] != b[i + j]){
                temp += 1;
            }
        }
        if(temp < num){
            num = temp;
        }
    }

    cout << num;

    return 0;
}
