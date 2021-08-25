#include <iostream>

/*
 * [170] 백준 1969번 DNA
 */

using namespace std;

int N, M, cnt = 0;
string answer = "";
string DNA[1000];

int max_num(int a, int c, int g, int t){
    int max;
    max = (a>=c) ? a : c;
    max = (max>=g) ? max : g;
    max = (max>=t) ? max : t;
    return max;
}

int main() {
    cin >> N >> M;
    for(int i = 0; i < N; i++)
        cin >> DNA[i];

    for(int i = 0; i < M; i++){
        int a = 0, c = 0, g = 0, t = 0;
        for(int j = 0; j < N; j++){
            switch (DNA[j][i]){
                case 'A':
                    a++;
                    break;
                case 'C':
                    c++;
                    break;
                case 'G':
                    g++;
                    break;
                case 'T':
                    t++;
                    break;
            }
        }
        int max = max_num(a, c, g, t);
        if(max==a) answer += 'A';
        else if(max==c) answer += 'C';
        else if(max==g) answer += 'G';
        else answer += 'T';

        cnt += N - max;
    }

    cout<< answer << '\n' << cnt;

    return 0;
}
