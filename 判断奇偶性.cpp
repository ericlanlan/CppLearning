#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "请输入一个整数" << endl;
	cin >> a;
	if (a % 2 == 0)
	{
		cout << "这是一个偶数" << endl;
	}
	else
	{
		cout << "这是一个奇数" << endl;
	}
	return 0;
}
