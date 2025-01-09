// no return type or no argument
#include <iostream>
using namespace std;
void add()
{
    int a, b, c;
    cout << "enter two numbers : ";
    cin >> a >> b;
    c = a + b;
    cout << "sum  = " << c << endl;
}
void sub()
{
    int a, b, c;
    cout << "enter two numbers : ";
    cin >> a >> b;
    c = a - b;
    cout << "sum  = " << c << endl;
}
void cube()
{
    int num, c;
    cout << "enter a num : ";
    cin >> num;
    c = num * num * num;
    cout << "cube of " << num << " = " << c << endl;
}
void even_odd()
{
    int num, c;
    cout << "enter a num : ";
    cin >> num;
    if(num%2==0)
    {
        cout<<"num is even"<<endl;
    }
    else{
        cout<<"num is odd"<<endl;
    }
}
int main()
{
    cube();
    even_odd();
    return 0;
}