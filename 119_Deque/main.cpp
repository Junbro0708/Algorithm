#include <iostream>
#include <deque>

/*
 * [119] 백준 10866번 덱
 */

using namespace std;

int main() {
    int N;
    deque<int> answer;
    cin >> N;

    for(int i = 0; i < N; i++){
        string temp_s;
        cin >> temp_s;

        if(temp_s == "push_back"){
            int temp_n;
            cin >> temp_n;
            answer.push_back(temp_n);
        }else if(temp_s == "push_front"){
            int temp_n;
            cin >> temp_n;
            answer.push_front(temp_n);
        }else if(temp_s == "pop_front"){
            if(answer.empty()) cout << -1 << "\n";
            else{
                cout << answer.front() << "\n";
                answer.pop_front();
            }
        }else if(temp_s == "pop_back"){
            if(answer.empty()) cout << -1 << "\n";
            else{
                cout << answer.back() << "\n";
                answer.pop_back();
            }
        }else if(temp_s == "size"){
            cout << answer.size() << "\n";
        }else if(temp_s == "empty"){
            if(answer.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }else if(temp_s == "front"){
            if(answer.empty()) cout << -1 << "\n";
            else cout << answer.front() << "\n";
        }else if(temp_s == "back"){
            if(answer.empty()) cout << -1 << "\n";
            else cout << answer.back() << "\n";
        }
    }
    return 0;
}
