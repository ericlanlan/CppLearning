#include<iostream>
using namespace std;
int main()
{
	int n, i;
	cin >> n;
	for (i = 0; n; n /= 10)
		i++;
	cout << i;
	return 0;
}
