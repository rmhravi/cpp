#include<iostream>
using namespace std;
int main()
{
    int n,mul,i;
    cout<<"Enter a number";
    cin>>n;
    cout<<"Multiplication table of"<<n;
    for(i=1;i<=10;i++)
    {
        mul=n*i;
        cout<<"\n"<<n<<"*"<<i<<"="<<mul;
    }
    return 0;
}
