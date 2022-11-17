#include<iostream>
using namespace std;

void out(long n)
{
	if (n < 10)
		cout << n;
	else
	{
		cout << n % 10;
		return out(n / 10);
	}
}

int main()
{
	long n;
	cin >> n;
	out(n);
	return 0;
}
