#include<iostream>
typedef long long ll;
using namespace std;
int main(void)
{
    int a[300000];
    int n;
    int k=1000000000;
    int w;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>w;
        k=min(k,w/max(i-1,n-i));
    }
    cout<<k<<endl;
    return 0;
}
