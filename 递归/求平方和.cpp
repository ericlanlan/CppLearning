#include<iostream>
using namespace std;

int f(int n)
{
	if (n == 1)
		return 1;
	else
		return f(n - 1) + n * n;
}

int main()
{
	int n;
	cin >> n;
	cout << f(n) << endl;
	return 0;
}
