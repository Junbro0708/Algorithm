#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>

/*
 * [225] 백준 14889번 스타트와 링크
 */

using namespace std;

#define INT_MAX 20
int N, min_score = 99999999;
int Stats[INT_MAX][INT_MAX];

int main() {
    cin >> N;

    memset(Stats, 0, sizeof(INT_MAX));
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> Stats[i][j];
        }
    }

    vector<int> Players(N, 0);
    vector<int> mask(N, 0);
    for(int i = 0; i < N; ++i)
        Players[i] = i;
    for(int i = 0; i < N; ++i){
        if(i < (N / 2))
            mask[i] = 0;
        else
            mask[i] = 1;
    }
    sort(mask.begin(), mask.end());

    do {
        vector<int> start, link;
        int start_score = 0, link_score = 0;
        for(int i = 0; i < mask.size(); i++){
            if(mask[i] == 0)
                start.push_back(Players[i]);
            else
                link.push_back(Players[i]);
        }

        for(int i = 0; i < (N / 2); ++i){
            for(int j = 0; j < (N/2); ++j){
                start_score += Stats[start[i]][start[j]];
                link_score += Stats[link[i]][link[j]];
            }
        }

        int temp = abs(start_score - link_score);
        min_score = min(min_score, temp);
    } while (next_permutation(mask.begin(), mask.end()));

    cout << min_score;
    return 0;
}
