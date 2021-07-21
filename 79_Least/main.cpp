#include <iostream>
#include <vector>
#include <algorithm>

/*
 * [79] 백준 2609번 최대공약수와 최소공배수
 */

using namespace std;

int main() {
    int n1, n2;
    int an1, an2;
    int mul = 1;
    cin >> n1 >> n2;

    vector<int> num;
    num.push_back(n1);
    num.push_back(n2);
    sort(num.begin(), num.end());

    for(int i = num.front(); i >= 1; --i){
        if(num.back() % i == 0 && num.front() % i == 0){
            an1 = i;
            break;
        }
    }

    while(true){
        int temp = num.back() * mul;
        if(temp % num.front() == 0){
            an2 = temp;
            break;
        }
        mul++;
    }

    cout << an1 << endl;
    cout << an2 << endl;
    return 0;
}
