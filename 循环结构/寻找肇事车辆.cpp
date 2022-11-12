/*
一辆汽车撞人后逃跑,4个目击者提供如下线索: 
甲说:牌照第三,第四位相同(从左边数起). 
乙说:牌号为31xxxx. 
丙说:牌照第五,第六位相同(从左边数起). 
丁说:第三位~第六位是一个整数的平方.
求出此牌照号码 
*/
#include <iostream>
using namespace std;
int main()
{
    for (int a = 0; a <= 9; a++)
    {
        for (int b = 0; b <= 9; b++)
        {
            for (int n = 1; n <= 100; n++)
            {
                if (a * 1100 + b * 11 == n * n)
                    cout << "31" << a << a << b << b << endl;
            }
        }
    }
}
