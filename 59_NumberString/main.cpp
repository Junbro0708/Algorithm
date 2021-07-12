#include <iostream>
#include <string>

/*
 * [59] 프로그래머스 숫자 문자열과 영단어
 */

using namespace std;

int solution(string s) {
    string answer_s = "";

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9') answer_s += s[i];
        else{
            switch (s[i]) {
                case 'z' :
                    answer_s += '0';
                    i += 3;
                    break;
                case 'o' :
                    answer_s += '1';
                    i += 2;
                    break;
                case 't' :
                    if(s[i+1] == 'w'){ answer_s += '2'; i += 2; break; }
                    else if(s[i+1] == 'h'){ answer_s += '3'; i += 4; break; }
                case 'f':
                    if(s[i+1] == 'o'){ answer_s += '4'; i += 3; break; }
                    else if(s[i+1] == 'i'){ answer_s += '5'; i += 3; break; }
                case 's':
                    if(s[i+1] == 'i'){ answer_s += '6'; i += 2; break; }
                    else if(s[i+1] == 'e'){ answer_s += '7'; i += 4; break; }
                case 'e':
                    answer_s += '8';
                    i += 4;
                    break;
                case 'n':
                    answer_s += '9';
                    i += 3;
                    break;
            }
        }
    }
    return stoi(answer_s);
}

int main() {
    std::cout << solution("one4seveneight") << std::endl;
    return 0;
}
