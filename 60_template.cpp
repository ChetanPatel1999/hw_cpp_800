// template type class
#include <iostream>
using namespace std;
template <class t>
class data_store
{
    t data1;
    t data2;

public:
    void setdata(t a, t b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "data1 : " << data1 << endl;
        cout << "data2 : " << data2 << endl;
    }
};
int main()
{
    data_store<int> d1;
    d1.setdata(12, 45);
    d1.display();
    data_store<float> d2;
    d2.setdata(34.56, 78.90);
    d2.display();
    data_store<string> d3;
    d3.setdata("home", "pen");
    d3.display();
    data_store<char> d4;
    d4.setdata('H', 'P');
    d4.display();
    return 0;
}