#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>

/*
 * [227] 백준 1339번 단어 수학
 */

using namespace std;

char alpha_[256];

int calculate(vector<string> &words, vector<char> &alphabet, vector<int> &ascii){
    int sum = 0;
    for(int i = 0; i < alphabet.size(); i++){
        alpha_[alphabet[i]] = ascii[i];
    }
    for(string s: words){
        int tmp = 0;
        for (char ch: s){
            tmp = tmp * 10 + alpha_[ch];
        }
        sum += tmp;
    }
    return sum;
}

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

    do {
        int cost = calculate(word, alpha, num);
        max_ = (cost > max_) ? cost : max_;
    }while(prev_permutation(num.begin(), num.end()));
    cout << max_;
    return 0;
}
