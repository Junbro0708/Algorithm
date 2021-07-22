#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

/*
 * [83] 백준 2309번 일곱 난쟁이
 */

using namespace std;

int main() {
    vector<int> dwarf;
    bool search = false;

    for(int i = 0; i < 9; i++){
        int temp;
        cin >> temp;
        dwarf.push_back(temp);
    }

    sort(dwarf.begin(), dwarf.end());
    int sum = accumulate(dwarf.begin(), dwarf.end(), 0) - 100;

    for(int i = dwarf.size() - 1; i > 1; --i){
        for(int j = i - 1; j > 0; --j){
            if((dwarf[i] + dwarf[j]) == sum){
                dwarf.erase(dwarf.begin() + i);
                dwarf.erase(dwarf.begin() + j);
                search = true;
                break;
            }
        }
        if(search) break;
    }

    for(int i = 0; i < dwarf.size(); i++){
        cout << dwarf[i] << endl;
    }

    return 0;
}
