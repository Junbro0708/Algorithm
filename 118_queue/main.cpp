#include <iostream>
#include <queue>

/*
 * [118] 백준 10845번 큐
 */

using namespace std;

int main() {
    int N;
    queue<int> answer;
    
    cin >> N;
    for(int i = 0; i < N; i++){
        string temp;
        cin >> temp;

        if(temp == "push"){
            int temp_n;
            cin >> temp_n;
            answer.push(temp_n);
        }else if(temp == "front"){
            if(!answer.empty()) cout << answer.front() << "\n";
            else cout << -1 << "\n";
        }else if(temp == "back"){
            if(!answer.empty()) cout << answer.back() << "\n";
            else cout << -1 << "\n";
        }else if(temp == "size"){
            cout << answer.size() << "\n";
        }else if(temp == "empty"){
            if(!answer.empty()) cout << 0 << "\n";
            else cout << 1 << "\n";
        }else if(temp == "pop"){
            if(answer.empty()) cout << -1 << "\n";
            else {
                cout << answer.front() << "\n";
                answer.pop();
            }
        }
    }
    return 0;
}
