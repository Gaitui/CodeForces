#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(void)
{
    int n;
    string s;
    int x[4]={0};
    int k;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        x[s[i]-'0']++;
        if(i<n/2)
        {
            x[s[i]-'0'+2]++;
        }
    }
    if(x[0]!=x[1])
    {
        cout<<"1"<<endl;
        cout<<s<<endl;
    }
    else
    {
        cout<<"2"<<endl;
        if(n%4==0 && x[2]==x[3])
        {
            for(int i=0;i<=n/2;i++)
            {
                cout<<s[i];
            }
            cout<<" ";
            for(int i=n/2+1;i<n;i++)
            {
                cout<<s[i];
            }
        }
        else
        {
            for(int i=0;i<n/2;i++)
            {
                cout<<s[i];
            }
            cout<<" ";
            for(int i=n/2;i<n;i++)
            {
                cout<<s[i];
            }
        }
 
        cout<<endl;
    }
    return 0;
}
