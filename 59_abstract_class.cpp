// pure virtual function and abstract class
#include <iostream>
using namespace std;
class base
{
public:
    virtual void fun1() = 0; // pure virtual function
    virtual void fun2() = 0; // pure virtual function
    void fun3()
    {
        cout << "hi i am fun3 " << endl;
    }
};
class derived : public base
{
public:
    void fun4()
    {
        cout << "hi i am fun4" << endl;
    }
    void fun1()
    {
        cout << "hi i am fun1" << endl;
    }
    void fun2()
    {
        cout << "hi i am fun2 " << endl;
    }
};
int main()
{
    derived d1;
    d1.fun1();
    d1.fun2();
    d1.fun3();
    d1.fun4();
    return 0;
}