#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
 * [91] 프로그래머스 이진 변환 반복하기
 */

using namespace std;

string ConvertTwo(int num){
    string answer = "";
    while(num != 0){
        if(num % 2 == 0) answer = "0" + answer;
        else answer = "1" + answer;
        num /= 2;
    }
    return answer;
}

vector<int> solution(string s) {
    vector<int> answer(2, 0);
    int length;

    while (s != "1"){
        length = s.length();
        s.erase(remove(s.begin(), s.end(), '0'), s.end());
        cout << s << endl;

        length -= s.length();
        answer[1] += length;

        s = ConvertTwo(s.length());
        answer[0]++;
    }
    return answer;
}

int main() {
    vector<int> answer = solution("110010101001");

    for(int i = 0; i < answer.size(); i++){
        cout << answer[i] << " ";
    }

    return 0;
}
