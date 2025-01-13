#include<iostream>
using namespace std;
class emp
{
    int id;
    float sal;
    public:
    void setemp()
    {
       cout<<"enter emp info ...."<<endl; 
       cout<<"enter emp id : ";
       cin>>id;
       cout<<"enter emp sal : ";
       cin>>sal;
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
    e1.setemp();
    e2.setemp();
    e3.setemp();
    e1.disp_emp();
    e2.disp_emp();
    e3.disp_emp();
    return 0;
}