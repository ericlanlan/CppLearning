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
