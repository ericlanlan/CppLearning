//编写程序验证下列结论：任何一个自然数n的立方都等于n个连续奇数之和。要求程序对每个输入的自然数计算并输出相应的连续奇数。
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    m = (n * n - n) / 2;
    cout << n << "*" << n << "*" << n << "=" << n * n * n << "=";
    for (int a = 2 * m + 1; a < (2 * m + 2 * n - 1); a = a + 2)
    {
        cout << a << "+";
    }
    cout << 2 * m + 2 * n - 1;
    return 0;
}
