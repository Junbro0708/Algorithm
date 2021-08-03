#include <iostream>
#include <sstream>
#include <vector>

/*
 * [110] 백준 1152번 단어의 개수
 */

using namespace std;

int main() {
    string s;
    getline(cin, s);

    vector<string> answer;
    istringstream ss(s);
    string stringBuffer;


    while(getline(ss, stringBuffer, ' ')){
        answer.push_back(stringBuffer);
    }

    for(int i = 0; i < answer.size(); i++){
        if(answer[i] == "") answer.erase(answer.begin() + i);
    }
    cout << answer.size();
    return 0;
}
