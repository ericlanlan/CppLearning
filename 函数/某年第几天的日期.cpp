/*
编写一个函数，功能是计算出某年的第某天的日期（年月日格式），例如，计算2014年的第100天日期是多少（结果为2014年4月10日）
*/
#include<iostream>
using namespace std;

void f(int y, int n)
{
	int m = 1;
	for (int i = 1; i < 12; i++)
	{
		if (i < 8 && i % 2 != 0)
		{
			if ((n - 31) > 0)
			{
				m++;
				n -= 31;
			}
			else break;
		}
		if (i == 2)
		{
			if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
			{
				if ((n - 29) > 0)
				{
					m++;
					n -= 29;
				}
				else break;
			}
			else
			{
				if ((n - 28) > 0)
				{
					m++;
					n -= 28;
				}
				else break;
			}
		}
		if (i < 8 && i % 2 == 0 && i != 2)
		{
			if ((n - 30) > 0)
			{
				m++;
				n -= 30;
			}
			else break;
		}
		if (i >= 8 && i % 2 == 0)
		{
			if ((n - 31) > 0)
			{
				m++;
				n -= 31;
			}
			else break;
		}
		if (i >= 8 && i % 2 != 0)
		{
			if ((n - 30) > 0)
			{
				m++;
				n -= 30;
			}
			else break;
		}

	}
	int d = n;
	cout << y << "-" << m << "-" << d << endl;
}

int main()
{
	int y, n;
	cin >> y >> n;
	f(y, n);
	return 0;
}
