#include <iostream>
#include <vector>

/*
 * [107] 백준 2947번 나무 조각
 */

using namespace std;

int main() {
    vector<int> arr;
    bool isFinish = true;
    for(int i = 0; i < 5; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    while (isFinish){
        int cnt = 0;
        for(int i = 0; i < arr.size() - 1; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;

                for(int j = 0; j < arr.size(); j++) cout << arr[j] << " ";
                cout << "\n";
            }
        }
        for(int j = 0; j < arr.size(); j++){
            if(arr[j] < arr[j+1]) cnt++;
            if(cnt == 4) isFinish = false;
        }
    }
    return 0;
}
