#include <iostream>
using namespace std;
int main()
{
	int N,i,a=0,b=1,c;
	cout<<"Enter number of terms in fibonazzi series";
	cin>>N;
	cout<<"fibonazzi series of first"<<N<<"terms";
	cout<<a<<b;
	for (int i = 3; i < N; ++i)
	{
		c=a+b;
		cout<<c;
		a=b;
		b=c;
	}
	return 0;
}