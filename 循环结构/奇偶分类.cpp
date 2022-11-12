/*
编写一个程序，读取整数，直到用户输入0.输入结束后，程序应报告用户输入的偶数（不包括0）个数、这些偶数的平均值、输入的奇数个数和这些奇数的平均值。
输出格式：
偶数个数，偶数平均值
奇数个数，奇数平均值
*/
#include<iostream>
using namespace std;
int main()
{
	int n = 1;
	int a = 0, b = 0, sum1 = 0, sum2 = 0;
	while (n != 0)
	{
		cin >> n;
		if (n % 2 == 0)
		{
			a++;
			sum1 += n;
		}
		else
		{
			b++;
			sum2 += n;
		}
	}
	double avg1 = (double)sum1 / (a - 1);
	double avg2 = (double)sum2 / b;
	if (a == 1)avg1 = 0;
	if (b == 0)avg2 = 0;
	cout << a - 1 << "," << avg1 << endl << b << "," << avg2;
	return 0;
}
