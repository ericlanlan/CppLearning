/*
编写一个程序，用户输入1周工作的小时数，然后打印工资总额、税金和净收入。
做如下假设：
a.基本工资＝10.00美元／小时；
b.加班（工作时间超过40小时）＝按1.5倍的时间计算；
c.税率：前300美元为15%;
接下来的150美元为20%;
余下的为25%.
输入说明：一个数字
输出说明：一行英文，Your salary before tax is xxx, tax is xxx, salary after tax is xxx， 精确到小数点后2位
输入示例：30
输出示例：Your salary before tax is 300.00, tax is 45.00, salary after tax is 255.00
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double h, b, e, t, s;
	cin >> h;
	if (h < 40) 
	{ 
		b = 10.00 * h;
		e = 0;
	}
	else 
	{
		b = 10.00 * 40;
		e = 10.00 * (h - 40) * 1.5;
	}
	s = b + e;
	if (s < 300)
	{
		t = 0.15 * s;
	}
	else if (s < 450) 
	{
		t = 0.15 * 300 + (s - 300) * 0.20;
	}
	else
	{
		t = 0.15 * 300 + 150 * 0.20 + (s - 450) * 0.25;
	}
	cout<<fixed<<setprecision(2) << "Your salary before tax is " <<
		s << ", tax is " << t << ", salary after tax is " << s - t;
	return 0;
}
