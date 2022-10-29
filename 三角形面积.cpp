#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, b, c, s, area, temp;
	cout << "a,b,c = ";
	cin >> a >> b >> c; //输入三角形的三条边
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	else{}
	if (a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	else {}
	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;//将三个数字按从小到大顺序排列
	}
	else {}
	if (a + b > c)
	{
		s = (a + b + c) / 2.0;
		area = sqrt(s * (s - a) * (s - b) * (s - c)); //求三角形的面积
		cout << "area=" << area << endl;
	}
	else
	{
		cout << "此三边无法构成三角形" << endl;
	}
	    return 0;
