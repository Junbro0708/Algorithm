#include <iostream>
#include <vector>

/*
 * [135] 백준 10773 제로
 */

using namespace std;

int main() {
    int K;
    long long int answer = 0;
    vector<int> arr;

    cin >> K;
    while (K--){
        int temp;
        cin >> temp;

        if(!arr.empty() && temp == 0) arr.pop_back();
        else arr.push_back(temp);
    }

    for(int i = 0; i < arr.size(); i++)
        answer += arr[i];

    cout << answer << "\n";

    return 0;
}
