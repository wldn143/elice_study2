#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int in, out;
	int curr = 0;
	int max;
	for (int i = 0; i < 10; i++) {
		cin >> out >> in;
		curr = curr - out + in;
		if (i == 0) {
			max = curr;
		}
		if (curr > max) {
			max = curr;
		}
	}
	cout << max;
}
