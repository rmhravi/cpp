#include<iostream>
using namespace std;
int main()
{
  int A[10],i;
  cout<<"enter number of array elements";
  cin>>10;
  cout<<"enter array elements";
  for(i=0;i<10;i++)
  cin>>A[i];
  cout<<"array elements are";
  for(i=0;i<10;i++)
  cout<<A[i];
  return 0;
}
