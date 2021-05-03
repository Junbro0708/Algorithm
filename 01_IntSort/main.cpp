#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(long long n){
    string s = to_string(n);
    sort(s.begin(), s.end(), greater<int>());
    return stoll(s);
}

int main() {
    cout << solution(118372);
    return 0;
}

