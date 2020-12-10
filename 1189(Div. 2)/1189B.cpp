#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(void)
{
    vector<int> a,b;
    int n,k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        a.push_back(k);
    }
    sort(a.begin(),a.end());
    if(a[n-1]>=a[n-2]+a[n-3])
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i+=2)
        {
            cout<<a[i]<<" ";
        }
        if(n%2!=0)
        {
            n--;
        }
        for(int i=n-1;i>0;i-=2)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
