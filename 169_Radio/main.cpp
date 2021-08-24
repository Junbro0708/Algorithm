#include <iostream>

/*
 * [169] 백준 3135번 라디오
 */

using namespace std;

int main() {
    int min = 1000, temp;
    int A, B, N;
    cin >> A >> B >> N;

    for(int i = 0; i < N; i++){
        cin >> temp;
        if(abs(B - temp) < min) min = abs(B - temp);
    }

    temp = min;

    if(temp + 1 < abs(B - A)) min = temp + 1;
    else min = abs(B - A);

    cout << min << "\n";
    return 0;
}
