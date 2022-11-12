#include<iostream>
using namespace std;
int main() {
	for (int i = 1; i <= 6; i++)
	{
		for (int a = 1; a <= i - 1; a++)
			cout << " ";
		for (int n = 1; n <= 13 - 2 * i; n++)
		{
			cout << 'm';
			if (n == 13 - 2 * i)cout << endl;
		}
	}
	return 0;
}
