#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double f(double x, double n)
{
	if (n == 1)
		return sqrt(n + x);
	else
		return sqrt(n + f(x, n - 1));
}

int main()
{
	double x, n;
	cin >> x >> n;
	cout << fixed << setprecision(2) << f(x, n) << endl;
	return 0;
}
