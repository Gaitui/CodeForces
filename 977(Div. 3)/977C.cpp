#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int n,k;
    cin>>n>>k;
    vector<int> s;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        s.push_back(t);
    }
    sort(s.begin(),s.end());
    if(k==0)
    {
        if(s[0]==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }
    }
    else if(k==n)
        cout<<s[n-1]<<endl;
    else
    {
        if(s[k-1]!=s[k])
        {
            cout<<s[k-1]<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
