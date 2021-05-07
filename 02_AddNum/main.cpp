#include <iostream>

using namespace std;

int solution(int n)
{
    int answer = 0;

    for(int i = 1; i < 10; i++){
        answer += (n % 10);
        n = n / 10;

        if(n == 0)
            break;
    }

    return answer;
}

int main(){
    cout << solution(987) << endl;
}