#include<iostream>
#include<map>
using namespace std;
int main(void)
{
    int n,mi;
    string s,t;
    cin>>n>>s;
    map<string,int> x;
    map<string,int>::iterator iter;
    for(int i=0;i<n-1;i++)
    {
        t.clear();
        t+=s[i];
        t+=s[i+1];
        x[t]++;
    }
    mi=0;
    t.clear();
    for(iter=x.begin();iter!=x.end();iter++)
    {
        if(iter->second > mi)
        {
            t=iter->first;
            mi=iter->second;
        }
    }
    cout<<t<<endl;
    return 0;
}
