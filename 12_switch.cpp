//wap to print word according to given number.
// 1  ONE
// 2  TWO
// 3  Three
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a num : ";
    cin>>num;  //5
    switch(num)
    {
      case 1:cout<<"ONE";break;
      case 2:cout<<"TWO";break;
      case 3:cout<<"THREE";break;
      case 4:cout<<"FOUR";break;
      case 5:cout<<"FIVE";break;
      default:cout<<"enter num 1 to 5"; 
    }
    return 0;
}