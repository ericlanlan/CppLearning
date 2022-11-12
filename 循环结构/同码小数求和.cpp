/*
    设和式s(d,n)=0.d+0.dd+0.ddd+...+0.dd...d为n项同码d小数之和，其中第k项小数点后有连续k个数字d(d=1,2,3,...,9)
    例如：s(7,4)=0.7+0.77+0.777+0.7777 
    输入整数d，n(1<=d<=9,1<=n<=3000),计算并输出同码小数和s(d,n)(四舍五入精确到小数点后8位)

*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int n;
	double d, s = 0, sum = 0;
	cin >> d >> n;
	for (int i = 1; i <= n; i++)
	{
		d /= (double)10;
		sum += d;
		s += sum;
	}
	double a = floor((s + 5e-9) * 1e8) / 1e8;
	cout << fixed << setprecision(8) << a;
    return 0;
}
