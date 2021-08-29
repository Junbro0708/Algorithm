#include <iostream>

/*
 * [193] 백준 10815번 숫자 카드
 */

using namespace std;

int arr[10000000 * 2 + 1] = {0, };
int N, M;

int main() {
    scanf("%d", &N);
    int sub;

    for (int i = 0; i < N; i++) {
        scanf("%d", &sub);
        arr[sub + 10000000] = 1;
    }

    scanf("%d", &M);
    for (int i = 0; i < M; i++) {
        scanf("%d", &sub);
        if (arr[sub + 10000000]) printf("%d ", 1);
        else printf("%d ", 0);
    }

    return 0;
}
