#include <iostream>
using namespace std;
class demo
{
    int a;        // non static
    int b;        // non static
    static int c; // static
    static int d; // static
public:
    void set_data(int u, int v, int x, int y)
    {
        a = u;
        b = v;
        c = x;
        d = y;
    }
    void display()
    {
        cout << "a , b =" << a << " , " << b << endl;
        cout << "c , d =" << c << " , " << d << endl;
    }
};
int demo::c;   //redeclaire with class name
int demo::d;
int main()
{
    demo d1, d2, d3;
    d1.set_data(12,13,100,200);
    d2.set_data(14,15,300,400);
    d3.set_data(16,17,500,600);
    d1.display();
    cout<<"_________________________"<<endl;
    d2.display();
    cout<<"_________________________"<<endl;
    d3.display();
    cout<<"_________________________"<<endl;
    return 0;
}