#include <iostream>
using namespace std;
class number;
class other
{
public:
    void display1(number n1);
    void display2(number n1);
    void display3(number n1);
};
class number
{
    int data1;
    int data2;
    int data3;

public:
    friend class other;
    void setdata(int a, int b, int c)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
};
void other::display1(number n1)
{
    cout << "data1 : " << n1.data1 << endl;
}
void other::display2(number n1)
{
    cout << "data2 : " << n1.data2 << endl;
}
void other::display3(number n1)
{
    cout << "data2 : " << n1.data3 << endl;
}
int main()
{
    number n1;
    n1.setdata(12, 56, 89);
    other obj;
    obj.display1(n1);
    obj.display2(n1);
    obj.display3(n1);
    return 0;
}