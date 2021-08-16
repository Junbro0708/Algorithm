#include <iostream>
#include <algorithm>

/*
 * [133] 백준 9237번 이장님 초대
 */

using namespace std;

int result = 0;
int arr[100000];

int main() {
	int num, cnt = 2;
	cin >> num;

	for (int i = 0; i < num; i++)
		cin >> arr[i];

	sort(arr, arr + num);

	for (int i = num-1; i >=0; i--) {
		result = max(result, cnt + arr[i]);
		cnt++;
	}

	cout << result << "\n";
	return 0;
}