#include<iostream>
using namespace std;
int main(void)
{
    int n,q;
    cin>>n>>q;
    long long unsigned *a=new long long unsigned[n];
    long long unsigned k;
    long long unsigned w=0;
    long long unsigned t;
    int d=0;
    int m,u;
    cin>>a[0];
    for(int i=1;i<n;i++)
    {
        cin>>t;
        a[i]=a[i-1]+t;
    }
    for(int i=0;i<q;i++)
    {
        cin>>k;
        w+=k;
        if(w>=a[n-1])
        {
            d=0;
            w=0;
        }
        else
        {
            u=n-1;
            while(d<u)
            {
                m=(d+u)/2;
                if(a[m]>w)
                {
                    if(a[m-1]<=w)
                    {
                        d=m;
                        break;
                    }
                    u=m;
                }
                else
                {
                    d=m+1;
                }
            }
        }
 
        cout<<n-d<<endl;
    }
}
