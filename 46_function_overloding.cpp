//function overloding
#include <iostream>
using namespace std;
void add(int a)
{
    cout << "sum = " << (a + 45) << endl;
}
void add(double a)
{
    cout << "sum = " << (a + 45) << endl;
}
void add(int a, int b)
{
    cout << "sum = " << (a + b) << endl;
}
void add(double a, double b)
{
    cout << "sum = " << (a + b) << endl;
}
void add(int a, int b, int c)
{
    cout << "sum = " << (a + b + c) << endl;
}
void add(double a, int b)
{
    cout << "sum = " << (a + b) << endl;
}
void add(int a, double b)
{
    cout << "sum = " << (a + b) << endl;
}
int main()
{
    add(12);
    add(5,9);
    add(3,2,6);
    add(45.56);
    add(3.45,7.89);
    add(12,56.7);
    return 0;
}