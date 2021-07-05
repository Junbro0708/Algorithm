#include <iostream>
#include <string>

/*
 * [51] 프로그래머스 시저 암호
 */

using namespace std;

string solution(string s, int n) {
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 97 && s[i] <= 122){
            if(s[i] + n > 122) s[i] = s[i] + n -26;
            else s[i] += n;
        }
        if(s[i] >= 65 && s[i] <= 90){
            if(s[i] + n > 90) s[i] = s[i] + n -26;
            else s[i] += n;
        }
    }
    return s;
}

int main() {
    std::cout << solution("AB", 1) << std::endl;
    return 0;
}
