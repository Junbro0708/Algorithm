#include <iostream>

/*
 * [106] 백준 1676번 팩토리얼 0의 개수
 */

using namespace std;

int main()
{
    int N, tmp;
    cin >> N;

    int two = 0, five = 0;

    for(int i = 1; i <= N; i++){
        tmp = i;
        while(tmp){
            if(tmp % 2 == 0){
                two++;
                tmp /= 2;
            }else break;
        }

        tmp = i;
        while(tmp){
            if(tmp % 5 == 0){
                five++;
                tmp /= 5;
            }else break;
        }
    }

    cout << min(two, five);
}
