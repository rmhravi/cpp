#include<iostream>
using namespace std;
int main()
{
    int a,n,r=0,p;
    cout<<"Enter an integer";
    cin>>n;
    p=n;
    while(n>0)
    {
        a=n%10;
        r=r*10+a;
        n=n/10;
    }
    if(p==r)
        cout<<"\n palindrome";
    else
        cout<<"\n not palindrome";
    return 0;
}
