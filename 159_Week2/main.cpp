#include <string>
#include <vector>

/*
 * [159] 프로그래머스 Level1 2주차
 */

using namespace std;

vector<double> avg(10, 0);

string solution(vector<vector<int>> scores) {
    string answer = "";

    for (int i = 0; i < scores.size(); i++) {
        int mx = -1e9;
        int mn = 1e9;
        for (int j = 0; j < scores.size(); j++) {
            avg[i] += scores[j][i];
            mx = max(mx, scores[j][i]);
            mn = min(mn, scores[j][i]);
        }

        int cnt1 = 0, cnt2 = 0;
        for (int j = 0; j < scores.size(); j++) {
            if(scores[j][i] == mx)  cnt1++;
            else if (scores[j][i] == mn)  cnt2++;
        }

        if ((cnt1 == 1 && mx == scores[i][i]) || (cnt2 ==1 && mn == scores[i][i])) {
            avg[i] -= scores[i][i];
            avg[i] /= (scores.size() - 1);
        } else {
            avg[i] /= scores.size();
        }
    }

    for (int i = 0; i < scores.size(); i++) {
        if (avg[i] >= 90) answer += "A";
        else if (avg[i] >= 80) answer += "B";
        else if (avg[i] >= 70) answer += "C";
        else if (avg[i] >= 50) answer += "D";
        else answer += "F";
    }

    return answer;
}