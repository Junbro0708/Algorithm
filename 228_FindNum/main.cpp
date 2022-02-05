#include <iostream>
#include <algorithm>

/*
 * [228] 백준 1920번 수 찾기
 */

using namespace std;

int N, M;
int arr[100001];

void BinarySearch(int key){
    int start = 0;
    int end = N - 1;
    int mid;

    while (end >= start){
        mid = (start + end) / 2;

        if(arr[mid] == key){
            cout << 1 << "\n";
            return;
        }else if(arr[mid] > key){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    cout << 0 << "\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N;
    for(int i = 0; i < N; ++i){
        int temp;
        cin >> temp;
        arr[i] = temp;
    }
    sort(arr, arr + N);

    cin >> M;
    for(int i = 0; i < M; ++i){
        int temp;
        cin >> temp;
        BinarySearch(temp);
    }
    return 0;
}
