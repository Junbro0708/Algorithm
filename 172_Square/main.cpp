#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [172] 백준 1485번 정사각형
 */

using namespace std;

int Distance(pair<int, int> a, pair<int, int> b){
    return (b.first - a.first) * (b.first - a.first) + (b.second - a.second) * (b.second - a.second);
}

int main() {
    int T;
    cin >> T;
    while(T--){
        vector<pair<int, int>> dots;
        for(int i = 0; i < 4; i++){
            int temp1, temp2;
            cin >> temp1 >> temp2;
            dots.push_back(make_pair(temp1, temp2));
        }
        sort(dots.begin(), dots.end());
        int a = Distance(dots[0], dots[1]);
        int b = Distance(dots[0], dots[2]);
        int c = Distance(dots[1], dots[3]);
        int d = Distance(dots[2], dots[3]);
        int e = Distance(dots[0], dots[3]);
        int f = Distance(dots[1], dots[2]);

        if(a == b && b == c && c == d && d == a && e == f) cout << "1" << "\n";
        else cout << "0" << "\n";
    }
    return 0;
}
