#include<iostream>
using namespace std;
int main() {
	int a, b, sum = 0;
	for (a = 1, b = 1; a <= 20; a++)
	{
		b = b * a;
		sum = sum + b;
	}
	cout << sum;
	return 0;
}
