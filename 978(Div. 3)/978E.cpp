#include<iostream>
using namespace std;
typedef long long ll;
int main(void)
{
    int n;
    ll w;
    ll t,MAX,MIN,c;
    MAX=0;
    MIN=0;
    t=0;
    cin>>n>>w;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        t+=c;
        if(t>MAX)
            MAX=t;
        if(t<MIN)
            MIN=t;
    }
    if(w-MAX+MIN+1>0)
        cout<<w-MAX+MIN+1<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}
