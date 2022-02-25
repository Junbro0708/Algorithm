#include <iostream>
#include <algorithm>
#include <vector>

/*
 * [239] 백준 1759번 암호 만들기
 */

using namespace std;

int L, C;
vector<char> word;
vector<char> password;

bool Check(){
    int vowels = 0;
    for(int i = 0; i < L; ++i){
        if(password[i] == 'a'||
        password[i] == 'e'||
        password[i] == 'i'||
        password[i] == 'o'||
        password[i] == 'u')
            vowels++;
    }
    if(vowels >= 1 && L - vowels >= 2) return true;
    else return false;
}

void DFS(int index){
    if(password.size() == L){
        if(Check()){
            for(int i = 0; i < password.size(); ++i){
                cout << password[i];
            }
            cout << "\n";
        }
        return;
    }
    for(int i = index; i < C; ++i){
        password.push_back(word[i]);
        DFS(i + 1);
        password.pop_back();
    }
}

int main() {
    cin >> L >> C;
    for(int i = 0; i < C; ++i){
        char temp;
        cin >> temp;
        word.push_back(temp);
    }
    sort(word.begin(), word.end());
    DFS(0);
    return 0;
}
