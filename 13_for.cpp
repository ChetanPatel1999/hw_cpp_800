//wap to print table of given num.
#include<iostream>
using namespace std;
int main()
{
    int num,tab,i;
    cout<<"enter a num : ";
    cin>>num;//5
    for(i=1;i<=10;i++)
    {
      tab=num*i;
      cout<<num<<" * "<<i<<" = "<<tab<<endl;
    }
    return 0;
}