#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [126] 백준 1755번 숫자 놀이
 */

using namespace std;

int N, M;
string nums[11] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
vector<pair<string, int>> answer;

int main() {
    string s;
    cin >> M >> N;

    for(int i = M; i <= N; i++){
       if(i >= 10){
           s = nums[i / 10] + " " + nums[i % 10];
           answer.push_back({s, i});
       }else{
           s = nums[i % 10];
           answer.push_back({s, i});
       }
    }
    sort(answer.begin(), answer.end());
    for (int i = 0; i < answer.size(); i++){
        cout << answer[i].second << " ";
        if (i % 10 == 9) cout << '\n';
    }
    return 0;
}
