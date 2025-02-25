#include <iostream>
using namespace std;
class base
{
public:
    int a; // a is public

private:
    int b; // b is priavte
protected:    
    int c;

public:
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};
class derived : public base
{
public:
    void show()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl; // not access b in derived
        cout << "c = " << c << endl; // c access in derived class
        display();
    }
};
class other
{
public:
    void test()
    {
        base obj;
        cout << "a = " << obj.a << endl;
        cout << "b = " << obj.b << endl; // not access b in other class
        cout << "c = " << obj.c << endl; 
        obj.display();
    }
};
int main()
{
    base b1;
    b1.a = 12;
    b1.b = 78; // not access b in main function
    b1.c = 34; 
    b1.display();
    derived d1;
    d1.a = 56;
    d1.show();
    return 0;
}