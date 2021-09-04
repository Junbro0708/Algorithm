#include <iostream>
#include <set>

/*
 * [203] 백준 10867번 중복 빼고 정렬하기
 */

using namespace std;

int main() {
    int N;
    cin >> N;
    set<int> arr;
    while(N--){
        int temp;
        cin >> temp;
        arr.insert(temp);
    }
    for(auto i : arr)
        cout << i << " ";
    return 0;
}
