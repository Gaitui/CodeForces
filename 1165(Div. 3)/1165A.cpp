#include<iostream>
typedef long long ll;
using namespace std;
int main(void)
{
    int n,x,y;
    string a;
    int sum=0;
    cin>>n>>x>>y;
    cin>>a;
    for(int i=n-1;i>=n-y;i--)
    {
        if(a[i]!='0')
        {
            sum++;
        }
    }
    if(a[n-y-1]!='1')
    {
        sum++;
    }
    for(int i=n-y-2;i>=n-x;i--)
    {
        if(a[i]!='0')
        {
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
