#include <iostream>
using namespace std;
class base
{
public:
    int a;

private:
    int b;

protected:
    int c;
};
class derieved : private base
{
    public:
    void show()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
    }
};
int main()
{
    derieved o1;
    o1.a = 12;
    o1.b = 23;
    o1.c = 263;
    return 0;
}