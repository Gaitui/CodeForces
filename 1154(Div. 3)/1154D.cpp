#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
    vector<int> r;
    int n,b,a;
    cin>>n>>b>>a;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        r.push_back(k);
    }
    int t=a;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(b>0 || t>0)
        {
            c++;
            if(r[i]==0)
            {
                if(t>0)
                {
                    t--;
                }
                else
                {
                    b--;
                }
            }
            else
            {
                if(b>0 && t<a)
                {
                    b--;
                    t++;
                }
                else
                {
                    t--;
                }
            }
        }
        else
        {
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}
