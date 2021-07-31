#include <iostream>
#include <vector>

/*
 * [104] 백준 1292번 쉽게 푸는 문제
 */

using namespace std;

int main() {
    int A, B, answer = 0, num = 1;
    vector<int> arr;
    cin >> A >> B;

    for(int i = 1; i <= 1000; i++){
        int count = 0;
        while(num != count){
            arr.push_back(num);
            count++;
            i++;
        }
        num++;
    }

    for(int i = A - 1; i < B; i++)
        answer += arr[i];

    cout << answer;
    return 0;
}
