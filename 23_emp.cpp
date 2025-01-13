#include<iostream>
using namespace std;
class emp
{
    int id;
    float sal;
    public:
    void setemp(int a,float b)
    {
        id=a;
        sal=b;
    }
    void disp_emp()
    {
        cout<<"emp info :"<<endl;
        cout<<"emp id :"<<id<<endl;
        cout<<"emp sal :"<<sal<<endl;
        cout<<"___________________________"<<endl;
    }
};
int main()
{
    emp e1,e2,e3;
    e1.setemp(101,12000);
    e2.setemp(102,50000);
    e3.setemp(103,70000);
    e1.disp_emp();
    e2.disp_emp();
    e3.disp_emp();
    return 0;
}