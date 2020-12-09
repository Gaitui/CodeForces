#include<iostream>
using namespace std;
int main(void)
{
    int n;
    string s;
    int z=0,o=0;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
           o++;
        else
           z++;
    }
    //cout<<o<<" "<<z<<endl;
    if(o==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<"1";
        for(int i=0;i<z;i++)
            cout<<"0";
        cout<<endl;
    }
    return 0;
}
