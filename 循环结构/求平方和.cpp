/*
依次输入一个下限整数和一个上限整数，计算从上限到下限范围内所有整数的平方和，并显示计算结果。
*/
#include<iostream>
using namespace std;
int main()
{
	int a, b, sum = 0;
	cin >> a >> b;
	for (; a <= b; a++)
		sum += a * a;
	cout << sum;
	return 0;
}
