#include <iostream>
using namespace std;
class addition
{
public:
    void add(int a, int b)
    {
        int c;
        c = a + b;
        cout << "sum : " << c << endl;
    }
    void add(float a, float b)
    {
        int c;
        c = a + b;
        cout << "sum : " << c << endl;
    }
};
class subtraction
{
public:
    void sub(int a, int b)
    {
        int c;
        c = a - b;
        cout << "sub : " << c << endl;
    }
};
class multiplication
{
public:
    void mul(int a, int b)
    {
        int c;
        c = a * b;
        cout << "mul : " << c << endl;
    }
};
class calculater:public addition,public subtraction ,public multiplication
{
    public:
    void all_operation(int a,int b)
    {
       add(a,b);
       sub(a,b);
       mul(a,b);
    }
};
int main()
{
    calculater clc;
    clc.add(12,5);
    clc.sub(12,5);
    clc.mul(12,5);
    clc.all_operation(44,8);
    return 0;
}