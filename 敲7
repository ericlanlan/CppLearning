//输出7和7的倍数，还有包含7的数字例如（17，27，37...70，71，72，73...）
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    while (cin >> a && a >= 1 && a <= 30000) {
        for (b = 1; b < a; ++b) {
            if (b % 7 == 0 || b % 10 == 7 || b / 10 == 7 || b / 100 == 7 || b / 1000 == 7)
                cout << b << " ";
        }
    }
    return 0;
}


3. 编写程序验证下列结论：任何一个自然数n的立方都等于n个连续奇数之和。例如：13=1，23=3+5，33=7+9+11，要求程序对每个输入的自然数计算并输出相应的连续奇数。
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
