#include <iostream>
#include <vector>

/*
 * [147] 백준 1065번 한수
 */

using namespace std;

bool isHanNum(int num){
    vector<int> arr;

    if(num >= 100 && num < 1000){
        int temp;
        while(num){
            temp = num % 10;
            num /= 10;
            arr.push_back(temp);
        }

        if(arr[1] - arr[0] == arr[2] - arr[1]) return true;
        else return false;

    }else if(num < 100) return true;
    else return false;
}
int main() {
    int X, cnt = 0;
    cin >> X;

    for(int i = 1; i <= X; i++)
        if(isHanNum(i)) cnt++;

    cout << cnt << "\n";

    return 0;
}
