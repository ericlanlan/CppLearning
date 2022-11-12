#include<iostream>
using namespace std;
int main() {
	int n, a, b, c, m;
	cout << "请输入一个三位数n:";
	cin >> n;
	a = n / 100;
	b = (n % 100) / 10;
	c = n % 10;
	m = 1 * a + 10 * b + 100 * c;
	cout << "n的反向输出为" << m << endl;
	return 0;
}
