#include <iostream>
#include <vector>

/*
 * [171] 백준 1475번 방 번호
 */

using namespace std;

int main() {
    string N;
    vector<int> digit(10, 0);

    cin >> N;
    for(int i = 0; i < N.length(); i++)
        digit[N[i] - '0']++;

    int six_nine = (digit[6] + digit[9] + 1) / 2;
    digit[6] = six_nine;
    digit[9] = six_nine;

    int temp = 0;
    for(int i = 0; i < digit.size(); i++)
        if(digit[temp] < digit[i]) temp = i;

    cout << digit[temp] << "\n";
    return 0;
}
