//with return type no argument
#include<iostream>
using namespace std;
int add()
{
    int a, b, c;
    cout << "enter two numbers : ";
    cin >> a >> b;
    c = a + b;
    return c;
}
string fun()
{
    string s;
    cout<<"enter your name : ";
    cin>>s;
    s=s+" "+"patel";
    return s;
}
int main()
{
    cout<<"sum = "<<add()<<endl;
    cout<<"name = "<<fun()<<endl;
    return 0;
}