#include <iostream>
#include <queue>

/*
 * [188] 백준 2164번 카드 2
 */

using namespace std;

int main() {
    int N;
    cin >> N;

    queue<int> card;
    for(int i = 1; i <= N; i++)
        card.push(i);

    while(card.size() > 1){
        card.pop();
        int temp = card.front();
        card.pop();
        card.push(temp);
    }
    cout << card.front() << "\n";
    return 0;
}
