#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int A, B, cnt = 1, index = 1, arr[1000001] = { 0, },res=0;
	cin >> A >> B;
	for (int i = 1; i <= B; i++) {
		while (1) {
			if (cnt == i) {
				arr[index] = i;
				index++;
				cnt = 1;
				break;
			}
			arr[index] = i;
				cnt++;
				index++;
		}
	}
	for (int i = A; i <= B; i++) {
		res += arr[i];
	}
	cout << res;

}
