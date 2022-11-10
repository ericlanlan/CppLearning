//编写一个程序，读取输入，读到#字符时停止，报告ei出现的次数。
#include<iostream>
using namespace std;
int main()
{
	char a, b;
	int i = 0;
	a = getchar();
	while ((a != '#'))
	{
		if (a == 'e')
		{
			if ((b = getchar()) == 'i')
				i++;
			else a = b;
		}
		else a = getchar();
	}
	cout << i;
	return 0;
}
