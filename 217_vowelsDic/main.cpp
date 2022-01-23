#include <string>
#include <iostream>

/*
 * [217] 프로그래머스 level 2 모음사전
 */

using namespace std;

char vowel[5] = {'A', 'E', 'I', 'O', 'U'};
int answer = 0;

bool DFS(string word, string find){
    answer++;

    if(!word.compare(find))
        return true;

    if(word.length() == 5)
        return  false;

    for(int i = 0; i < 5; i++)
        if(DFS(word + vowel[i], find))
            return true;

    return false;
}

int solution(string word) {
    DFS("", word);
    return answer - 1;
}

int main(){
    cout << solution("AAAAE");
}
