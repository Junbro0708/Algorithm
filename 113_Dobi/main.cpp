#include <iostream>
#include <vector>

using namespace std;

int main() {
    int isPlay = 1;

    while(isPlay){
        cin >> isPlay;
        vector<string> arr;

        for(int i = 0; i < isPlay; i++){
            string temp;
            cin >> temp;
            arr.push_back(temp);
        }

    }
    return 0;
}
