//wap to print sum from 1 to n.
#include<iostream>
using namespace std;
int main()
{
    int i=1,sum=0,n;
    cout<<"enter a num : ";
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"sum 1 to 10 : "<<sum<<endl;

    return 0;
}