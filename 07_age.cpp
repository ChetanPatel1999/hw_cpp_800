// wap to check voter is eligible for vote or not.
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age :";
    cin >> age; 
    if (age >= 18)
    {
        cout << "you are eligible" << endl;
    }
    else
    {
        cout << "you are not elegible" << endl;
    }
    return 0;
}