#include <iostream>
#include <string>
#include <vector>

/*
 * [63] 프로그래머스 전화번호 목록
 */

using namespace std;

bool solution(vector<string> phone_book) {
    sort(phone_book.begin(), phone_book.end());

    for(int i = 0; i < phone_book.size() - 1; i++){
        if(phone_book[i] == phone_book[i+1].substr(0, phone_book[i].size())) return false;
    }
    return true;
}

int main() {
    std::cout << solution({"119", "97674223", "1195524421"}) << std::endl;
    return 0;
}
