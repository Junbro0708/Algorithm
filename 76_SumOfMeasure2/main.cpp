#include <iostream>

/*
 * [76] 백준 17427번 약수의 합2
 */

using namespace std;

int main() {
    int N;
//    vector<int> sum;
    long long int answer = 0;

    cin >> N;

//    for(int i = 1; i <= N; i++){
//        vector<int> temp;
//        for(int j = 1; j <= i; j++){
//            if(i % j == 0) temp.push_back(j);
//        }
//        int sum_N = accumulate(temp.begin(), temp.end(), 0);
//        sum.push_back(sum_N);
//    }
//
//    cout << accumulate(sum.begin(), sum.end(), 0);  풀이 1 : 시간초과

    for(int i = 1; i <= N; i++){
        answer += (N / i) * i;
    }
    cout << answer << endl;
    return 0;
}
