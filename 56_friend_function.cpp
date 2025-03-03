#include <iostream>
using namespace std;
class number
{
    int data1;
    int data2;

public:
    friend void display(number);
    friend void sum(number);
    void setdata(int a, int b)
    {
        data1 = a;
        data2 = b;
    }
};
void display(number n1)
{
    cout << "data1  : " << n1.data1 << endl;
    cout << "data2  : " << n1.data2 << endl;
}
void sum(number n1)
{
    cout << "sum = " << (n1.data1 + n1.data2) << endl;
}
int main()
{
    number n1;
    n1.setdata(12, 56);
    display(n1);
    sum(n1);
    return 0;
}