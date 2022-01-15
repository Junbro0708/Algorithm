#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <cstring>
#include <algorithm>

/*
 * [215] 프록래머스 level 1 신고 결과 받기
 */

using namespace std;

void print_vec(vector<int> answer)
{
    for(int i=0; i<answer.size(); i++)
    {
        cout<<answer[i]<<"\n";
    }
    cout<<endl;
}

pair<string, string> split(string s, string keyword){
    vector<string> v;
    char* c = strtok((char*)s.c_str(), keyword.c_str());
    while (c) {
        v.push_back(c);
        c = strtok(NULL, keyword.c_str());
    }
    return make_pair(v[0], v[1]);
}

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size(), 0);
    vector<pair<string, string>> list;

    for(int i = 0; i < report.size(); i++)
        list.push_back(split(report[i], " ")); // 문자열 스플릿

    sort(list.begin(), list.end()); // 중복 제거
    vector<pair<string, string>>::iterator ptr = unique(list.begin(), list.end());
    list.erase(ptr, list.end());

    for(int i = 0; i < id_list.size(); i++){
        vector<string> temp;
        for (int j = 0; j < list.size(); j++) {
            if(id_list[i] == list[j].second)
                temp.push_back(list[j].first);
        }

        if(temp.size() >= k){
            for(int j = 0; j < id_list.size(); j++){
                for(int k = 0; k < temp.size(); k++){
                    if(id_list[j] == temp[k]) {
                        answer[j]++;
                        continue;
                    }
                }
            }
        }
    }
    return answer;
}

int main() {
    vector<int> answer, answer2;
    answer = solution({"muzi", "frodo", "apeach", "neo"}, {"muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi"}, 2);
    print_vec(answer);

    answer2 = solution({"con", "ryan"}, {"ryan con", "ryan con", "ryan con", "ryan con"}, 3);
    print_vec(answer2);
    return 0;
}
