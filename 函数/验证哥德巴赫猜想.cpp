#include<iostream>
#include<cmath>
using namespace std;

bool prime(int i)
{
	int sum = 0;
	if (i == 2)return 1;
	for (int j = 2; j <= sqrt(i); j++)
	{
		if (i % j == 0)sum += 1;
	}
	if (sum == 0)return 1;
	else return 0;
}

void gotbaha(int a, int b, int c)
{
	cout << a << "=" << b << "+" << c << endl;
}

int main()
{
	int n;
	cin >> n;
	for (int i1 = 2; i1 < n - 2; i1++)
	{
		for (int i2 = 2; i2 < n - 2; i2++)
		{
			int flag1 = prime(i1);
			int flag2 = prime(i2);
			if ((flag1 + flag2 == 2) && (i1 + i2 == n) && (i1 < i2))
				gotbaha(n, i1, i2);
		}

	}
	return 0;
}
