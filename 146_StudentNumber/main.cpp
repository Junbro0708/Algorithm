#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

/*
 * [146] 백준 1235번 학생 번호
 */

using namespace std;

int main() {
    int N, answer = 1;

    cin >> N;
    string arr[1000];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
        reverse(arr[i].begin(), arr[i].end());
    }

    while(true){
        map<string, int> check;
        bool isCheck = true;
        for(int i = 0; i < N; i++){
            if(check.find(arr[i].substr(0, answer)) != check.end()){
                isCheck = false;
                break;
            }
            check[arr[i].substr(0, answer)] = 1;
        }
        if(isCheck) break;
        answer++;
    }

    cout << answer << "\n";
    return 0;
}
