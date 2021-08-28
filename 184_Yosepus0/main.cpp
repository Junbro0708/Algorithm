#include <iostream>
#include <vector>

/*
 * [184] 백준 11866번 요세푸스 문제 0
 */

using namespace std;

int main() {
    int N, K, j = 0, cnt = 0;
    vector<int> arr;
    vector<int> answer;
    cin >> N >> K;

    for(int i = 1; i <= N; i++) arr.push_back(i);

    while(!arr.empty()){
        cnt++;
        if(cnt == K){
            answer.push_back(arr[j]);
            arr.erase(arr.begin() + j);
            cnt = 0;
            j--;
        }

        if(j >= arr.size() - 1) j = 0;
        else j++;
    }

    cout << "<" << answer[0];
    for(int i = 1; i <= answer.size() - 1; i++)
        cout << ", " << answer[i];
    cout << ">";
    return 0;
}
