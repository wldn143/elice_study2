#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int N, k;
	int min, max;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> k;
		if(i==0){
			min = k; max = k;
		}
			if (k < min) {
				min = k;
			}
			if (k > max) {
				max = k;
			}
	}
	cout << min << " " << max << "\n";
}
