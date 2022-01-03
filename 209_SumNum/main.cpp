#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;

    for(int i = 0; i < 10; i++)
        if(find(numbers.begin(), numbers.end(), i) == numbers.end())
            answer += i;

    return answer;
}

int main(){
    vector<int> numbers = {1, 2, 3, 4, 6, 7, 8, 0};
    cout << solution(numbers) << endl;
}