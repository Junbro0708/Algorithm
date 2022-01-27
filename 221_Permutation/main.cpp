#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
 * [221] 백준 1182번 부분 수열의 합
 */

int main() {
    int N, S;
    int cnt = 0;
    cin >> N >> S;

    vector<int> arr(N, 0);
    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        arr[i] = temp;
    }
    sort(arr.begin(), arr.end());

    vector<int> mask;
    for(int level = 1; level <= N; level++){
        int sum = 0;
        for(int i = 0; i < level; i++){
            mask.push_back(1);
        }
        for(int i = 0; i < N - level; i++){
            mask.push_back(0);
        }
        sort(mask.begin(), mask.end());

        do{
            for(int i = 0; i < mask.size(); i++){
                if(mask[i] == 1) {
                    sum += arr[i];
                }
            }
            if(sum == S) cnt++;
            sum = 0;
        } while (next_permutation(mask.begin(), mask.end()));
        mask.clear();
    }

    cout << cnt << "\n";
    return 0;
}
