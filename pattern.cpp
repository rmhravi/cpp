#include<iostream>
using namespace std;
int main()
{
    cout<<"the program display the following pattern";
    for(int i=5;i>=1;i--)
    {
        cout<<"\n";
        for(int j=i;j<=i;j++)
        {
            cout<<"*"<<"\t";
        }
    }
    return 0;
}
