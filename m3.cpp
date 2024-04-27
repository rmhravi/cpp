#include<iostream>
using namespace std;
int main()
{
    int mul,n,i;
    cout<<"Enter a number";
    cin>>n;
    cout<<"Multiplication table of"<<mul;
    for(i=0;i<=12;i++)
    {
        mul=n*i;
        cout<<"\n"<<n<<"*"<<i<<"="<<mul;
    }
    return 0;
}
