#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct RPS
{
    int p=0;
    int r=0;
    int s=0;
};
int main(void)
{
    int N;
    cin>>N;
    while(N--)
    {
        RPS a,b;
        int n;
        string s;
        cin>>n;
        cin>>a.r>>a.p>>a.s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R')
            {
                b.r++;
            }
            else if(s[i]=='P')
            {
                b.p++;
            }
            else
            {
                b.s++;
            }
        }
        int w;
        if(n%2!=0)
            w=(n+1)/2;
        else
            w=n/2;
        if(min(a.r,b.s)+min(a.s,b.p)+min(a.p,b.r)<w)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='R')
                {
                    b.r--;
                    if(a.p>0)
                    {
                        cout<<"P";
                        a.p--;
                    }
                    else if(a.r>b.s)
                    {
                        cout<<"R";
                        a.r--;
                    }
                    else
                    {
                        cout<<"S";
                        a.s--;
                    }
                }
                else if(s[i]=='P')
                {
                    b.p--;
                    if(a.s>0)
                    {
                        cout<<"S";
                        a.s--;
                    }
                    else if(a.p>b.r)
                    {
                        cout<<"P";
                        a.p--;
                    }
                    else
                    {
                        cout<<"R";
                        a.r--;
                    }
                }
                else
                {
                    b.s--;
                    if(a.r>0)
                    {
                        cout<<"R";
                        a.r--;
                    }
                    else if(a.s>b.p)
                    {
                        cout<<"S";
                        a.s--;
                    }
                    else
                    {
                        cout<<"P";
                        a.p--;
                    }
                }
            }
            cout<<endl;
        }
 
    }
    return 0;
}
