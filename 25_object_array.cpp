//object of array
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
    emp e[5];
    int i;
    for(i=0;i<5;i++)//5
    {
        e[i].setemp();
    }
    for(i=0;i<5;i++)
    {
        e[i].disp_emp();
    }
    return 0;
}