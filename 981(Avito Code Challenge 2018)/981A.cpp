#include<iostream>
using namespace std;
int main(void)
{
    string s,t;
    int m=0;
    bool f=true,q=true;
    char a;
    cin>>s;
    a=s[0];
    for(int i=s.size()-1;i>=0;i--)
    {
        t+=s[i];
    }
    for(int i=0;i<s.size()/2+1;i++)
    {
        if(s[i]!=t[i])
        {
            f=false;
            q=false;
            break;
        }
        else if(s[i]!=a)
        {
            q=false;
        }
    }
    if(!f && !q)
    {
        cout<<s.size()<<endl;
    }
    else if(!q)
    {
        cout<<s.size()-1<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}
