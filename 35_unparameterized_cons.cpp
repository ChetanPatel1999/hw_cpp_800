#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp() // un parameterized constructor
    {
        id = 100;
        sal = 5000;
    }
    emp(int a,float b)// parameterized constructor
    {
        id=a;
        sal=b;
    }
    void display()
    {
        cout << "emp info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sal : " << sal << endl;
    }
};
int main()
{
    emp e1,e2(101,10000);
    e1.display();
    e2.display();
    return 0;
}