// with return type with argument
#include <iostream>
using namespace std;
int add(int a,int b)
{
    int c;
    c = a + b;
    return c;
}
float average(float a, float b)
{
    float av;
    av = (a + b) / 2;
    return av;
}
string fun(string s)
{
    s=s+" "+"patel";
    return s;
}

int cube(int num)
{
    return (num*num*num);
}
int main()
{
    // int res=add(12,5);
    // cout<<res<<endl;
    // cout<<"res = "<<add(7,9)<<endl;
    cout<<"averge : "<<average(12.3,5.6)<<endl;
    cout<<"name : "<<fun("chetan")<<endl;
    cout<<"name : "<<fun("ram")<<endl;
    cout<<"cube : "<<cube(4)<<endl;
    return 0;
}