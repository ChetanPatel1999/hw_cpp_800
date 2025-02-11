#include <iostream>
using namespace std;
class complex
{
    int real;
    int image;

public:
    void setcmp(int a, int b)
    {
        real = a;
        image = b;
    }
    void dispcmp()
    {
        cout << "complex number : " << real << " + " << image << "i" << endl;
    }
    complex sum(complex obj)
    {
        complex res;
        res.real = real + obj.real;
        res.image = image + obj.image;
        return res;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setcmp(12, 8);
    c2.setcmp(3, 9);
    c1.dispcmp();
    c2.dispcmp();
    c3 = c1.sum(c2);
    c3.dispcmp();
    return 0;
}