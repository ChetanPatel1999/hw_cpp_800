// no return type but with argument
#include <iostream>
using namespace std;
void add(int a, int b)
{
    int c;
    c = a + b;
    cout << "sum  = " << c << endl;
}
void average(float a, float b)
{
    float av;
    av = (a + b) / 2;
    cout << "avrage = " << av << endl;
}
void cube(int num)
{
    int c;
    c = num * num * num;
    cout << "cube of " << num << " = " << c << endl;
}
void even_odd(int num)
{
    if(num%2==0)
    {
        cout<<"num is even"<<endl;
    }
    else{
        cout<<"num is odd"<<endl;
    }
}
void display(string s)
{
  cout<<"value of s ="<<s<<endl;
}
int main()
{
    add(6, 9);
    float x = 12.3, y = 8.9;
    average(x, y);
    cube(4);
    even_odd(12);
    display("home");
    return 0;
}