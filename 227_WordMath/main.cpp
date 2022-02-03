#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>

/*
 * [227] 백준 1339번 단어 수학
 */

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N, max_ = INT_MIN;
    cin >> N;

    vector<char> alpha;
    vector<int> num;
    vector<string> word(N, "");
    for(int i = 0; i < word.size(); ++i){
        cin >> word[i];
        for(char ch: word[i])
            alpha.push_back(ch);
    }

    sort(alpha.begin(), alpha.end());
    alpha.erase(unique(alpha.begin(), alpha.end()), alpha.end());
    for(int i = 0; i < alpha.size(); ++i)
        num.push_back(9-i);
    sort(num.begin(), num.end());
    do {
        int cost = 0;
        vector<string> temp;

        for(int i = 0; i < word.size(); ++i)
            temp.push_back(word[i]);

        for(int i = 0; i < temp.size(); ++i){
            for(int j = 0; j < temp[i].size(); ++j){
                for(int k = 0; k < alpha.size(); ++k){
                    if(temp[i][j] == alpha[k]){
                        temp[i][j] = char(num[k] + '0');
                    }
                }
            }
        }
        for(int i = 0; i < temp.size(); ++i)
            cost += stoi(temp[i]);
        max_ = (cost > max_) ? cost : max_;
    }while(next_permutation(num.begin(), num.end()));
    cout << max_;
    return 0;
}
