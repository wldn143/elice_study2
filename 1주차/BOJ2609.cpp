#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << "\n";
	cout<<lcm(a, b);
}
