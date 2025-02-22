// method overloding
#include <iostream>
using namespace std;
class display
{
public:
    void disp(int a)
    {
        cout << "a : " << a << endl;
    }
    void disp(double a)
    {
        cout << "a : " << a << endl;
    }
    void disp(string a)
    {
        cout << "a : " << a << endl;
    }
    void disp(int a,int b)
    {
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
    }
};
int main()
{
    display d1;
    d1.disp(34);
    d1.disp(45.67);
    d1.disp("home");
    d1.disp(45,78);
    return 0;
}