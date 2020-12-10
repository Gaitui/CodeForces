#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    if(n==1 || n==7 || n==9 || n==10 || n==11)
    {
        cout<<"NO"<<endl;
    }
    else if(n>=13 && n<=29)
    {
        cout<<"NO"<<endl;
    }
    else if(n==31 || n==37 || n== 39)
    {
        cout<<"NO"<<endl;
    }
    else if(n==41 || n==47 || n== 49)
    {
        cout<<"NO"<<endl;
    }
    else if(n==51 || n==57 || n== 59)
    {
        cout<<"NO"<<endl;
    }
    else if(n==61 || n==67 || n== 69)
    {
        cout<<"NO"<<endl;
    }
    else if(n>=70 && n<=79)
    {
        cout<<"NO"<<endl;
    }
    else if(n==81 || n==87 || n== 89)
    {
        cout<<"NO"<<endl;
    }
    else if(n>=90)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
