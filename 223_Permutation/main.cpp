#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

/*
 * [223] 백준 2098번 외판원 순회
 */

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    vector<vector<int>> road(N, vector<int>(N, 0));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int temp;
            cin >> temp;
            road[i][j] = temp;
        }
    }

    vector<int> city;
    for(int i = 0; i < N; i++)
        city.push_back(i);

    int min_cost = INT_MAX;

    do{
        int cost = 0;
        bool isPass = true;

        for(int i = 0; i < city.size() - 1; i++){
            if(road[city[i]][city[i+1]] > 0){
                cost += road[city[i]][city[i+1]];
            }else{
                isPass = false;
                break;
            }
        }

        if(road[city[N-1]][city[0]] > 0){
            cost += road[city[N-1]][city[0]];
        }else{
            isPass = false;
        }

        if(isPass){
            min_cost = min(min_cost, cost);
        }
    } while (next_permutation(city.begin(), city.end()));

    cout << min_cost;
    return 0;
}
