//reference variable
#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int &b = a;// b is a reference variable
    cout << a << endl; // 12
    cout << b << endl; // 12
    a = 90;
    cout << a << endl; // 90
    cout << b << endl; // 90
    b = 500;
    cout << a << endl;
    cout << b << endl;
    return 0;
}