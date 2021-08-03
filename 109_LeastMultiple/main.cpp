#include <iostream>
#include <vector>

/*
 * [109] 백준 1934번 최소공배수
 */

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int min_ = min(A, B);
    int max_ = max(A, B);
    vector<int> least;

    for(int i = 1; i <= min_; i++)
        if(min_ % i == 0) least.push_back(i);

    for(int j = 0; j < least.size(); j++){
        long long int temp = max_ * least[j];
        if(temp % max_ == 0 && temp % min_ == 0){
            cout << temp;
            break;
        }
    }
    return 0;
}
