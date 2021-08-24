#include <iostream>
#include <vector>

/*
 * [168] 백준 1544번 사이클 단어
 */

using namespace std;

int N;
vector<string> arr;

void Check(string word){
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < word.length(); j++){
            if(arr[i] == word) return;
            word += word.at(0);
            word.erase(0, 1);
        }
    }
    arr.push_back(word);
}

int main() {
    cin >> N;
    while (N--){
        string temp;
        cin >> temp;
        if(arr.size() == 0) arr.push_back(temp);
        else Check(temp);
    }
    cout << arr.size() << "\n";
    return 0;
}
