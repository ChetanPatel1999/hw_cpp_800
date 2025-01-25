#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp(int a, float b)
    {
        id = a;
        sal = b;
    }
    emp(emp &obj) // copy constructor
    {
        cout << "copy constructor is called" << endl;
        id = obj.id+1;
        sal = obj.sal+2000;
    }
    void display()
    {
        cout << "emp info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sal : " << sal << endl;
    }
    emp()
    {
    }
};
int main()
{
    emp e1(101, 10000), e2(e1), e3;//user copy constructor
    e3 = e1; //default copy constructor is called
    e1.display();
    e2.display();
    e3.display();
    return 0;
}