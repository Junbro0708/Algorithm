#include<iostream>
#include<vector>

/*
 * [136] 백준 7568번 덩치
 */

using namespace std;

int N;
vector<pair<pair<int, int>, int>> V[50];

void Input()
{
    cin >> N;
    for (int i = 0; i < N; i++){
        int a, b;
        cin >> a >> b;
        V[i].push_back(make_pair(make_pair(a, b), 1));
    }
}

void Solution(){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (i == j) continue;
            if (V[i].front().first.first < V[j].front().first.first && V[i].front().first.second < V[j].front().first.second)
                V[i].front().second++;
        }
    }

    for (int i = 0; i < N; i++)
        cout << V[i].front().second << " ";
}

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    Input();
    Solution();
    return 0;
}