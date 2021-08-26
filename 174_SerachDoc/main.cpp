#include <iostream>
#include <string>

/*
 * [174] 백준 1543번 문서 검색
 */

using namespace std;

int main() {
    int cnt = 0;
    string doc, word;
    getline(cin, doc);
    getline(cin, word);

    for(int i = 0; i < doc.length(); i++){
        bool flag = true;
        for(int j = 0; j < word.length(); j++){
            if(doc[i+j] != word[j]){
                flag = false;
                break;
            }
        }
        if(flag) {
            cnt++;
            i += word.length() - 1;
        }
    }
    cout << cnt << "\n";
    return 0;
}
