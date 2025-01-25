#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp(int a=100, float b=2000)//default constructor
    {
        id = a;
        sal = b;
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
    emp e1(101, 5000), e2(102, 4000),e3(103),e4;
    e1.display();
    e4.display();
    return 0;
}