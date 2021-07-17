#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

/*
 * [72] 프로그래머스 가장 큰 수
 */

using namespace std;

bool Compare(string a, string b){
    string c = a + b;
    string d = b + a;

    if(c < d) return true;
    else return false;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> str;

    for(int i = 0; i < numbers.size(); i++){
        str.push_back(to_string(numbers[i]));
    }
    sort(str.begin(), str.end(), Compare);
    for(int i = 0; i < str.size(); i++){
        answer = str[i] + answer;
    }
    if(answer[0] == '0') return "0";
    else return answer;
}

int main() {
    std::cout << solution({3, 30, 34, 5, 9}) << std::endl;
    return 0;
}
