#include <iostream>
using namespace std;
class demo
{
public:
    demo() // constructor
    {
        cout << "constructor is called" << endl;
    }
    ~demo() // destructor
    {
        cout << "distructor is called" << endl;
    }
    void display()
    {
        cout << "hi i am display " << endl;
    }
};
int main()
{
    cout << "start main function" << endl;
    demo d1, d2;
    d1.display();
    cout << "again in main fuction" << endl;

    return 0;
}