#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

/*
 * 백준 1181번 단어 정렬
 */

using namespace std;

int main() {
    int N;
    string str;
    vector<string> word;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        string temp;
        scanf("%s", &temp);
        word.push_back(temp);
    }

    sort(word.begin(), word.end());

    for(int i = 0; i < N - 1; i++){
        for(int j = 0; j < N - i - 1; j++){
            if(word[j].length() > word[j+1].length()){
                str = word[j];
                word[j] = word[j + 1];
                word[j + 1] = str;
            }
        }
    }

    for(int i = 0; i < word.size(); i++){
        if(word[i] != word[i+1]){
            printf("%s\n", &word[i]);
        }
    }

    return 0;
}
