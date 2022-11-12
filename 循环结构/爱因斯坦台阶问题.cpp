#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 30000; i++)
	{
		if (i % 2 == 1 && i % 3 == 2 && i % 4 == 3 && i % 5 == 4 && i % 6 == 5 && i % 7 == 0)
			cout << i << endl;
	}
	return 0;
}
