#include<iostream>
using namespace std;
int main() {
	int a = 6;
	int b = 5;
	cout << "交换之前的情况：" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "交换之后的情况：" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
