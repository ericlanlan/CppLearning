//编写程序找出100~1000之间各位数之和等于5的整数。要求使用二重循环编程。
#include<iostream>
using namespace std;
int main() {
	for (int i = 100; i < 1000; i++)
	{
		int a, b, c;
		int flag = 1;
		a = i / 100;
		b = (i % 100) / 10;
		c = i % 10;
		while (a + b + c == 5 && flag == 1)
		{
			cout << i << endl;
			flag = 0;
		}
	}
	return 0;
}
