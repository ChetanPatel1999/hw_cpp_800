// wap to take array element and print array element.
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int i;
    cout << "enter array element : " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "display array element : ";
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    cout <<endl<< "array element sum = " << sum << endl;
    return 0;
}