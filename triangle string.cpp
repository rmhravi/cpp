#include<iostream>
using namespace std;
int main()
{
    char str[50];
    int i,j,n;
    cout<<"Enter a string";
    gets(str);
    n=strlen(str);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;i++)
        {
            cout<<str[j];
            cout<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
