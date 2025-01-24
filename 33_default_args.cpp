// how to set default argument in function
#include <iostream>
using namespace std;
void add(int a = 5, int b = 50) // 50 is default value of b
{
    int c;
    c = a + b;
    cout << "sum = " << c << endl;
}
void total_bill(int quantity, int price=100)
{
    int t_bill;
    t_bill = quantity * price;
    cout << "total bill :" << t_bill << endl;
}
int main()
{
    add(12, 5);  // 17
    add(20, 10); // 30
    add(8);      // 58
    add();       // 55
    total_bill(5,200);
    total_bill(10);
    total_bill(12);
    total_bill(12,50);
    return 0;
}