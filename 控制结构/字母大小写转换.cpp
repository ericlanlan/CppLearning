#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    char x, y;
    int i;
    cout << "请输入目标字母" << endl;
    cin >> x;
    i = x;
    if (i < 97)
    {
        i = i + 32;
        y = i;
        cout << "字母转换后为" << y << endl;
    }
    else
    {
        i = i - 32;
        y = i;
        cout << "字母转换后为" << y << endl;
    }
    return 0;
}
