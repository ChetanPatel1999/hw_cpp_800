//if we want to function changes appear in main function
//so you make function variable reference variable.
#include<iostream>
using namespace std;
void fun(int &n)//15
{
    n=12;
}
int main()
{
    int a=15;
    cout<<a<<endl;//15
    fun(a);
    cout<<a<<endl;//12
    return 0;
}