// function type template
#include <iostream>
using namespace std;

template <class t>
void display(t data)
{
    cout << "data : " << data << endl;
}

template <class t>
void add(t a, t b)
{
    cout << "sum : " << (a + b) << endl;
}
int main()
{
    add(12, 5);
    add(5.6, 7.1);
    display(12);
    display("home");
    display('K');
    display(12.56);
    return 0;
}