#include <string>
#include <vector>
#include <algorithm>

/*
 * [49] 프로그래머스 문자열 내 마음대로 정렬하기
 */

using namespace std;

int num;

bool CompareWord(string a, string b){
    if(a[num] != b[num]) return a[num] < b[num];
    else return a < b;
}

vector<string> solution(vector<string> strings, int n) {
    num = n;
    sort(strings.begin(), strings.end(), CompareWord);
    return strings;
}

int main() {
    return 0;
}
