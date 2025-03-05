#include <iostream>
using namespace std;
template <class t>
class complex
{
    t real;
    t image;

public:
    void setcmp(t a, t b)
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
    complex<int> c1, c2, c3;
    c1.setcmp(12, 8);
    c2.setcmp(3, 9);
    c1.dispcmp();
    c2.dispcmp();
    c3 = c1.sum(c2);
    c3.dispcmp();
    cout << "______________________________________________" << endl;
    complex<float> c4, c5, c6;
    c4.setcmp(5.6, 7.8);
    c5.setcmp(14.5, 8.3);
    c4.dispcmp();
    c5.dispcmp();
    c6 = c4.sum(c5);
    c6.dispcmp();
    return 0;
}