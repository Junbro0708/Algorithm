#include <iostream>
#include <string>
#include <vector>

/*
 * [53] 프로그래머스 카카오 비밀 지도
 */

using namespace std;

string Convert_Binary(int num, int n){
    string binary = "";
    while (num > 0){
        if(num % 2 == 1) binary = "1" + binary;
        else binary = "0" + binary;
        num >>= 1;
    }
    if(binary.size() < n){
        while (binary.size() < n){
            binary = "0" + binary;
        }
    }
    return binary;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> arr1_map, arr2_map;
    vector<string> answer(n, "");

    for(int i = 0; i < n; i++){
        arr1_map.push_back(Convert_Binary(arr1[i], n));
        arr2_map.push_back(Convert_Binary(arr2[i], n));
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr1_map[i][j] == '1' || arr2_map[i][j] == '1') answer[i] += '#';
            else answer[i] += ' ';
        }
    }
    return answer;
}

int main() { // 테스트
    vector<string> answer = solution(5, {9,20,28,18,11}, {30,1,21,17,28});
    for(int i = 0; i < answer.size(); i++){
        cout << answer[i] << endl;
    }
    return 0;
}
