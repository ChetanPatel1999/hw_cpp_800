// wap to print day name according to number.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a num : ";
    cin >> num;
    if (num == 1)
    {
        cout << "monday";
    }
    else if (num == 2)
    {
        cout << "tuesday" << endl;
    }
    else if (num == 3)
    {
        cout << "wednusday" << endl;
    }
    else if (num == 4)
    {
        cout << "thursday";
    }
    else if (num == 5)
    {
        cout << "friday";
    }
    else if (num == 6)
    {
        cout << "saturday";
    }
    else if (num == 7)
    {
        cout << "sunday";
    }
    else
    {
        cout << "enter num 1 to 7";
    }
    return 0;
}