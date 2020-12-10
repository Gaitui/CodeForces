#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(void)
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    int i=0;
    int sum=0;
    while(1)
    {
        if((i+1)<n)
        {
            if(s[i]==s[i+1])
            {
                s.erase(s.begin()+(i+1));
                sum++;
                n--;
            }
            else
            {
                i+=2;
            }
        }
        else
        {
            break;
        }
    }
    if(n%2!=0)
    {
        s.erase(s.begin()+(n-1));
        sum++;
    }
    cout<<sum<<endl;
    cout<<s<<endl;
    return 0;
}
