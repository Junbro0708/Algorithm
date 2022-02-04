#include <iostream>
#include <climits>

/*
 * [228] 백준 1920번 수 찾기 미완
 */

using namespace std;

bool nums[INT_MAX] = {false, };

int main() {
    int N, M;

    cin >> N;
    for(int i = 0; i < N; ++i){
        int temp;
        cin >> temp;
        nums[temp] = true;
    }

    cin >> M;
    for(int i = 0; i < M; ++i){
        int temp;
        cin >> temp;
        if(nums[temp])
            cout << "1" << "\n";
        else
            cout << "0" << "\n";
    }
    return 0;
}
