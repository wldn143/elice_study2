#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int isPrime(int k) {
	for (int i = 2; i < k; i++) {
		if (k % i == 0) {
			return false;
		}
	}
	return true;
}
int main()
{
	int M, N, cnt = 0, min=10000, res = 0;
	cin >> M >> N;
	for (int i = M; i <= N; i++) {
		if (isPrime(i)&&i!=1) {
			cnt++;
			res += i;
			if (i < min) {
				min = i;
			}
		}
	}
	if (cnt) {
		cout << res<<"\n";
		cout << min;
	}
	else {
		cout << -1;
	}
}
