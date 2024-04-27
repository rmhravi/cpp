#include<iostream>
using namespace std;
int main()
{
    int n;
    long fact(int);
    cout<<"Enter a number";
    cin>>n;
    cout<<"The factorial of a given number";
    cout<<fact(n);
}
long fact(int num)
{
    int i;
    long f=1;
    for(i=1;i<=num;i++)
    f=f*i;
    return (f);
}
