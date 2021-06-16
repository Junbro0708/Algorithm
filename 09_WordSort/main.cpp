#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

/*
 * 백준 1181번 단어 정렬
 */

using namespace std;

bool CompareWord(string a, string b){
    if(a.length() == b.length()){
        return a < b;
    }else{
        return a.length() < b.length();
    }
}

int main() {
    int N;
    string str;
    vector<string> word;
    cin >> N;
    for(int i = 0; i < N; i++){
        string temp;
        cin >> temp;
        word.push_back(temp);
    }

    sort(word.begin(), word.end(), CompareWord);

//    for(int i = 0; i < N - 1; i++){
//        for(int j = 0; j < N - i - 1; j++){
//            if(word[j].length() > word[j+1].length()){
//                str = word[j];
//                word[j] = word[j + 1];
//                word[j + 1] = str;
//            }
//        }
//    }

    for(int i = 0; i < word.size(); i++){
        if(word[i] != word[i+1]){
            cout << word[i] << "\n";
        }
    }
    return 0;
}
