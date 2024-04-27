#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,r;
	cout<<"Enter an integer";
	cin>>n;
	while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    cout<<"Sum of digits of an integer is"<<sum;
    return 0;
}
