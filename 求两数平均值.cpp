#include<iostream>
using namespace std;
int main() {
	int a;
	int b;
	cout << "请输入两个整数";
	cin >> a >> b;
	double avg = (a + b) / 2.0;
	cout << "这两个整数的平均值为" << avg << endl;
	return 0;
}
