#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    int a[3]={1,1,0};
    int f=0;
    int k;
    while(n--)
    {
        cin>>k;
        if(a[k-1]==0)
        {
            f=1;
            break;
        }
        for(int i=0;i<3;i++)
        {
            if(a[i]==0 && i!=k-1)
                a[i]=1;
            else if(a[i]==1 && i!=k-1)
                a[i]=0;
        }
    }
    if(f==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
