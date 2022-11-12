/*
小明有五本新书，要借给A，B，C三位小朋友，若每人每次只能借一本，则可以有多少种不同的借法？
*/
#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    for (int a = 1; a <= 5; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            for (int c = 1; c <= 5; c++)
            {
                if (a != b && b != c && c != a)
                    n++;
            }
        }
    }
    cout << n;
}
