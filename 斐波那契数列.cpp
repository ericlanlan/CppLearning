/*
输入n，输出斐波那契数列的第n项。
Hint：a0=0，a1=1
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int c = 1;
	for (int b = 1, i = 0, temp; i < n - 2; i++)
	{
		temp = c;
		c = b + c;
		b = temp;
	}
	cout << c;
	return 0;
}
