#include <iostream>
#include <vector>

/*
 * [77] 백준 17425번 약수의 합
 */

#define MAX 1000000
using namespace std;
vector<long long int> d(MAX + 1);

int main() {
//    int num;
//    cin >> num;
//
//    vector<int> N;
//
//    for(int i = 0; i < num; i++){
//        int temp;
//        cin >> temp;
//        N.push_back(temp);
//    }
//
//    for(int j = 0; j < N.size(); j++){
//        long long int answer = 0;
//        for(int k = 1; k <= N[j]; k++){
//            answer += (N[j] / k) * k;
//        }
//        cout << answer << endl;
//    } 망할 시간초과

    int num;
    cin >> num;

    vector<long long int> f(MAX + 1, 1);

    for(int i = 2; i <= MAX; i++){
        for(int j = 1; i * j <= MAX; j++){
            f[i * j] += i;
        }
    }
    for(int j = 1; j <= MAX; j++){
        d[j] = d[j - 1] + f[j];
    }

    while (num--) {
        int n;
        cin >> n;
        cout << d[n] << endl;
    }
    return 0;
}
