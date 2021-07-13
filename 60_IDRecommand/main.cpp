#include <iostream>
#include <string>

/*
 * [60] 프로그래머스 카카오 신규 아이디 추천
 */

using namespace std;

string solution(string new_id) {

    for(int i = 0; i < new_id.size(); i++) {
        new_id[i] = tolower(new_id[i]);
    } // 1

    for(int i = 0; i < new_id.size();){
        if((new_id[i] <= 'z' && new_id[i] >= 'a') || (new_id[i] <= '9' && new_id[i] >= '0') ||
           new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.'){
            i++;
        }else new_id.erase(new_id.begin() + i);
    } // 2

    for(int i = 0; i < new_id.size();){
        if(new_id[i] == '.' && new_id[i+1] == '.') new_id.erase(new_id.begin() + i);
        else i++;
    } // 3

    if(new_id.front() == '.') new_id.erase(new_id.begin());
    if(new_id.back() == '.') new_id.erase(new_id.end() - 1); // 4

    if(new_id == "") new_id += 'a'; // 5

    if(new_id.size() >= 16){
        while (new_id.size() >= 16){
            new_id.erase(new_id.begin() + 15);
        }
    }
    if(new_id.back() == '.') new_id.erase(new_id.end() - 1); // 6

    if(new_id.size() <= 2){
        while (new_id.size() <= 2){
            new_id += new_id.back();
        }
    } // 7

    return new_id;
}

int main() {
    std::cout << solution("...!@BaT#*..y.abcdefghijklm") << std::endl;
    return 0;
}
