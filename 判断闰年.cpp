#include <iostream>
using namespace std;

int main()
{
    int year;
    while(1)
    {
        cout << "输入年份:" ;
        cin >> year;
        if (year % 4 != 0)
        {
            cout << "不是闰年" << endl;
        }
        else if (year % 100 == 0 && year % 400 !=0)
        {
            cout << "不是闰年" << endl;
        }
        else
        {
            cout << "是闰年" << endl;
        }
    }
}