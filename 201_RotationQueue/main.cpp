#include <iostream>
#include <deque>

/*
 * [201] 백준 1021번 회전하는 큐
 */

using namespace std;

int main() {
    int N, M;
    int index, find, count = 0;
    deque<int> arr;

    cin >> N >> M;
    for(int i = 1; i <= N; i++){
        arr.push_back(i);
    }

    while (M--){
        cin >> find;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == find){
                index = i;
                break;
            }
        }
        if(index < arr.size() - index){
            while (true){
                if(arr.front() == find){
                    arr.pop_front();
                    break;
                }
                count++;
                arr.push_back(arr.front());
                arr.pop_front();
            }
        }else{
            while (true){
                if(arr.front() == find){
                    arr.pop_front();
                    break;
                }
                count++;
                arr.push_front(arr.back());
                arr.pop_back();
            }
        }
    }
    cout << count << "\n";
    return 0;
}
