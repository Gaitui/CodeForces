#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(void)
{
    int n,x,y;
    int a[200000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int sum=0;
    int k=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=k)
        {
            k++;
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
