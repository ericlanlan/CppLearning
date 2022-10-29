//输入一个日期(YYYY-MM-DD)，判断是这一年的第几天
#include <iostream>
using namespace std;
int main() {
    int y, m, d;
    char c;
    cin >> y >> c >> m >> c >> d;
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
    {
        switch (m)
        {
        case 1:cout << d << endl; break;
        case 2:cout << 31 + d << endl; break;
        case 3:cout << 31 + 29 + d << endl; break;
        case 4:cout << 31 + 29 + 31 + d << endl; break;
        case 5:cout << 31 + 29 + +31 + 30 + d << endl; break;
        case 6:cout << 31 + 29 + +31 + 30 + 31 + d << endl; break;
        case 7:cout << 31 + 29 + +31 + 30 + 31 + 30 + d << endl; break;
        case 8:cout << 31 + 29 + +31 + 30 + 31 + 30 + 31 + d << endl; break;
        case 9:cout << 31 + 29 + +31 + 30 + 31 + 30 + 31 + 31 + d << endl; break;
        case 10:cout << 31 + 29 + +31 + 30 + 31 + 30 + 31 + 31 + 30 + d << endl; break;
        case 11:cout << 31 + 29 + +31 + 30 + 31 + 30 + 31 + 31 + 30 + +31 + d << endl; break;
        case 12:cout << 31 + 29 + +31 + 30 + 31 + 30 + 31 + 31 + 30 + +31 + 30 + d << endl; break;
        }
    }
    else {
        switch (m)
        {
        case 1:cout << d << endl; break;
        case 2:cout << 31 + d << endl; break;
        case 3:cout << 31 + 28 + d << endl; break;
        case 4:cout << 31 + 28 + 31 + d << endl; break;
        case 5:cout << 31 + 28 + +31 + 30 + d << endl; break;
        case 6:cout << 31 + 28 + +31 + 30 + 31 + d << endl; break;
        case 7:cout << 31 + 28 + +31 + 30 + 31 + 30 + d << endl; break;
        case 8:cout << 31 + 28 + +31 + 30 + 31 + 30 + 31 + d << endl; break;
        case 9:cout << 31 + 28 + +31 + 30 + 31 + 30 + 31 + 31 + d << endl; break;
        case 10:cout << 31 + 28 + +31 + 30 + 31 + 30 + 31 + 31 + 30 + d << endl; break;
        case 11:cout << 31 + 28 + +31 + 30 + 31 + 30 + 31 + 31 + 30 + +31 + d << endl; break;
        case 12:cout << 31 + 28 + +31 + 30 + 31 + 30 + 31 + 31 + 30 + +31 + 30 + d << endl; break;
        }
    }
    return 0;
}
