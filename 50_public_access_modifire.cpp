#include <iostream>
using namespace std;
class base
{
public:
    int a;
    int b;
    int c;

public:
    void display()
    {
        cout << "a = " << a << endl;
    }
};
class derived : public base
{
public:
    void show()
    {
        cout << "a = " << a << endl;
    }
};
class other
{
public:
    void test()
    {
        base obj;
        cout << "a = " << obj.a << endl;
    }
};
int main()
{
    base b1;
    b1.a = 12;
    b1.display();
    derived d1;
    d1.a = 56;
    d1.show();
    return 0;
}