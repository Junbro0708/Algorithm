#include <iostream>
#include <cmath>

/*
 * [138] 백준 2331번 반복수열
 */

using namespace std;

const int MAX = 300000 + 1;
int A, P, result = 0;
int arr[MAX];

void DFS(int num){
    arr[num]++;
    if(arr[num] == 3)
        return;

    int next = 0;
    while(num){
        next += (int)pow((num % 10), P);
        num /= 10;
    }
    DFS(next);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> A >> P;

    DFS(A);
    for (int i = 0; i <= MAX; i++)
        if (arr[i] == 1)
            result++;
    cout << result << "\n";

    return 0;
}
