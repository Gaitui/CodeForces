#include<iostream>
using namespace std;
int main(void)
{
    int n,k;
    cin>>n>>k;
    if(k%2==0)
    {
        cout<<"Yes"<<endl;
        for(int i=0;i<n;i++)
            cout<<".";
        cout<<endl;
        for(int j=0;j<2;j++)
        {
            cout<<".";
            for(int i=0;i<k/2;i++)
                cout<<"#";
            for(int i=k/2+1;i<n;i++)
                cout<<".";
            cout<<endl;
        }
        for(int i=0;i<n;i++)
            cout<<".";
        cout<<endl;
    }
    else if((k<=(n-4) && k<4) || (k==(n-2) && k<4))
    {
        cout<<"Yes"<<endl;
        for(int i=0;i<n;i++)
            cout<<".";
        cout<<endl;
        cout<<".";
        for(int i=0;i<(n-k)/2-1;i++)
            cout<<".";
        for(int i=0;i<k;i++)
            cout<<"#";
        for(int i=(n+k)/2;i<n;i++)
            cout<<".";
        cout<<endl;
        for(int j=0;j<2;j++)
        {
            for(int i=0;i<n;i++)
                cout<<".";
            cout<<endl;
        }
    }
    else if(k>=4)
    {
        cout<<"Yes"<<endl;
        for(int i=0;i<n;i++)
            cout<<".";
        cout<<endl;
        cout<<".";
        for(int i=0;i<k/2+1;i++)
            cout<<"#";
        for(int i=k/2+2;i<n;i++)
            cout<<".";
        cout<<endl;
        cout<<".";
        for(int i=0;i<k/2-1;i++)
            cout<<"#";
        cout<<".#";
        for(int i=k/2+2;i<n;i++)
            cout<<".";
        cout<<endl;
        for(int i=0;i<n;i++)
            cout<<".";
        cout<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
