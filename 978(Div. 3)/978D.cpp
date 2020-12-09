#include<iostream>
using namespace std;
typedef long long ll;
int main(void)
{
    ll a[100000];
    ll n;
    ll k,p;
    ll w;
    ll m=-1;
    ll r=0;
    bool f;
    cin>>n;
    cin>>a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        r=r+a[i]-a[i-1];
    }
    r=r/(n-1);
    if(n<=2)
        cout<<"0"<<endl;
    else
    {
        for(int y=-1;y<=1;y++)
        {
            p=r+y;
            for(int j=-1;j<=1;j++)
            {
                f=true;
                k=a[0]+j;
                if(j!=0)
                    w=1;
                else
                    w=0;
                for(int i=1;i<n;i++)
                {
                    k+=p;
                    if(a[i]-k==-1 || a[i]-k==1)
                        w++;
                    else if(a[i]-k==0);
                    else
                    {
                        f=false;
                        break;
                    }
                }
                if(f)
                {
                    if(m==-1)
                        m=w;
                    else if(w<m)
                        m=w;
                }
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
