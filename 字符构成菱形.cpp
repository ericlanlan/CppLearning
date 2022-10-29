#include<iostream>
using namespace std;
int main() {
	char a;
	cin >> a;
	for (int i = 1; i <= 5; i++)
	{
		if (i == 1 || i == 5)cout << "  " << a << endl;
		if (i == 2 || i == 4)cout << " " << a << a << a << endl;
		if (i == 3)cout << a << a << a << a << a << endl;
	}
	return 0;
}
