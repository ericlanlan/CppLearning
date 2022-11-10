//读取输入，读到#字符停止，然后报告读取的空格数、换行符数和所有其他字符的数量。
#include<iostream>
using namespace std;
int main()
{
	char a;
	int b = 0, c = 0, d = 0;;
	while ((a = getchar()) != '#')
	{
		if (a == ' ')b++;
		else if (a == '\n')c++;
		else d++;
	}
	cout << b << " " << c << " " << d;
	return 0;
}
