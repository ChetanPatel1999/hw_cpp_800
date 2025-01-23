#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp()
    {
    }
    emp(int a, float b)
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
    emp e1(101, 5000), e2(102, 4000), e3;
    e1.display();
    return 0;
}