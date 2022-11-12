#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    char ch;
    int i;
    cout << "请输入目标字母" << endl;
    cin >> ch;
    i = ch;
    cout << "ASCII码为" << endl;
    cout << "十进制：" << i << endl;//十进制
    cout << "十六进制:" << hex << i << endl;//十六进制
    return 0;
}
