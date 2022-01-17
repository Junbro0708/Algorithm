#include <vector>
#include <iostream>
#include <queue>

/*
 * [216] 프로그래머스 level 2 다리를 지나는 트럭
 */

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int time = 0;
    int sum = 0;
    queue<int> bridge;

    while (!truck_weights.empty()){
        if(bridge.size() == bridge_length){
            sum -= bridge.front();
            bridge.pop();
        }
        if(bridge.size() < bridge_length){
            if(sum + truck_weights[0] <= weight){
                bridge.push(truck_weights[0]);
                sum += truck_weights[0];
                truck_weights.erase(truck_weights.begin());
            }else{
                bridge.push(0);
            }
        }
        time++;
    }
    time += bridge_length;
    return time;
}
//---------------------------------------------------------------------
int main() {
    cout << solution(2, 10, {7, 4, 5, 6});
    return 0;
}
