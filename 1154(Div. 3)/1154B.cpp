#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
    vector<int> a;
    int n,Max,Min,Ave;
    bool f=true;
    int k;
    cin>>n;
    cin>>k;
    a.push_back(k);
    Max=Min=k;
    for(int i=1;i<n;i++)
    {
        cin>>k;
        Max=max(k,Max);
        Min=min(k,Min);
        a.push_back(k);
    }
    if((Max+Min)%2!=0)
    {
        Ave=Max;
    }
    else
    {
        Ave=(Max+Min)/2;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=Max && a[i]!=Min && a[i]!=Ave)
        {
            cout<<"-1"<<endl;
            f=false;
            break;
        }
    }
    if(f)
    {
        cout<<max(Max-Ave,Ave-Min)<<endl;
    }
    return 0;
}
