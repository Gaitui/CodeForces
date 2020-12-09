#include<iostream>
using namespace std;
int main(void)
{
    int p=0,l=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='o')
            p++;
        else
            l++;
    }
    if(l==0 || p==0)
        cout<<"Yes"<<endl;
    else if(l%p==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
