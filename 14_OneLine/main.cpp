#include <iostream>
#include <vector>

/*
 *  백준 1138번 한 줄로 서기
 */

using namespace std;

int main() {
    int N;

    cin >> N;
    vector<int> line(N);

    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        for(int j = 0; j < N; j++){
            if(temp == 0 && line[j] == 0){
                line[j] = i + 1;
                break;
            }else if(line[j] == 0){
                temp--;
            }
        }
    }

    for(int k = 0; k < N; k++){
        cout << line[k] << " ";
    }
}
