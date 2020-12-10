#include<iostream>
using namespace std;
int main(void)
{
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    if(a>=n)
    {
        cout<<-1<<endl;
    }
    else if(b>=n)
    {
        cout<<-1<<endl;
    }
    else if(c>=n || c>a || c>b)
    {
        cout<<-1<<endl;
    }
    else if((n-a-b+c)<1)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<n-a-b+c<<endl;
    }
    return 0;
}
