// example of constructor
#include <iostream>
using namespace std;
class demo
{
    public:
    demo()
    {
        cout << "0 arg constructor is called" << endl;
    }
    demo(int a)
    {
        cout << "1 arg constructor is called" << endl;
    }
    demo(int a, int b)
    {
        cout << "2 arg constructor is called" << endl;
    }
    demo(int a, int b, int c)
    {
        cout << "3 arg constructor is called" << endl;
    }
    void display()
    {
        cout << "hi i am display" << endl;
    }
};
int main()
{
    demo d1(12);
    return 0;
}