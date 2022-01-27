#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

/*
 * [218] 백준 10971번 외판원 순회2
 */

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> city(N, 0);
    vector<vector<int>> road(N, vector<int>(N, 0));
    for(int i = 0; i < road.size(); i++){
        for(int j = 0; j < road[0].size(); j++){
            int temp;
            cin >> temp;
            road[i][j] = temp;
        }
    }

    for(int i = 0; i < road.size(); i++)
        city[i] = i;

    int min_cost = INT_MAX;

    do {
        int cost = 0;
        bool isVisit = true;

        for(int i = 0; i < city.size()-1; i++){
            if(road[city[i]][city[i+1]] > 0){
                cost += road[city[i]][city[i+1]];
            }else{
                isVisit = false;
                break;
            }
        }

        if(road[city[N-1]][city[0]] > 0){
            cost += road[city[N-1]][city[0]];
        }else isVisit = false;

        if(isVisit)
            min_cost = min(cost, min_cost);

    } while (next_permutation(city.begin(), city.end()));

    cout << min_cost;

    return 0;
}
