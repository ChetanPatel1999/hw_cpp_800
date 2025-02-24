#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout << "class A display" << endl;
    }
};
class B : public A
{
public:
    void display() // method override
    {
        cout << "class B dispaly" << endl;
    }
};
int main()
{
    B obj;
    obj.display(); // B class display is called
    return 0;
}