#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n = 100, a, b, c;
	for (n ; n < 999; n++)
	{
		a = n / 100;
		b = (n % 100) / 10;
		c = n % 10;
		if (n == pow(a, 3) + pow(b, 3) + pow(c, 3))
			cout << n << endl;
	}
	return 0;
}
