#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string Short(string in)
{
    static string re;
    re.clear();
    re+=in[0];
    for(int i=1;i<in.size();i++)
    {
        if(in[i]!=in[i-1])
        {
            re+=in[i];
        }
 
    }
    return re;
}
int main(void)
{
    int n;
    string *s;
    string in;
    string t;
    int root=0;
    cin>>n;
    s=new string[n];
    bool f;
    while(n--)
    {
        f=true;
        cin>>in;
        sort(in.begin(),in.end());
        t=Short(in);
        for(int i=0;i<root;i++)
        {
            if(!s[i].compare(t))
            {
                f=false;
                break;
            }
        }
        if(f)
        {
            s[root]=t;
            root++;
        }
    }
    cout<<root<<endl;
}
