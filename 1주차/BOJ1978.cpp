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
	int N,cnt=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int k;
		cin >> k;
		if (isPrime(k)&&k!=1) {
			cnt++;
		}
	}
	cout << cnt;

}
