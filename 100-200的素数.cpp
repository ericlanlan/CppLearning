#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
	for (int i = 101; i <= 200; i += 2)
	{
		int k = sqrt(i);
		for (int n = 2; n <= k; n++)
		{
			if (i % n == 0)cout << i << endl;
		}
	}
	return 0;
}
