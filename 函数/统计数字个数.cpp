//编写函数，读入一个正整数，统计并输出该数各位数码中包括某个数字的个数。如统计543567589中数字5的个数。
#include<iostream>
using namespace std;

int countdigit(int num, int digit)
{
	int sum = 0;
	for (; num > 0; num /= 10)
	{
		int a = num % 10;
		if (a == digit)
			sum++;
		
	}
	cout << sum;
	return sum;
}

int main()
{
	int num, digit;
	cin >> num >> digit;
	countdigit(num, digit);
	return 0;
}
