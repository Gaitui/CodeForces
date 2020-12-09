#include<iostream>
#include<algorithm>
using namespace std;
struct seg
{
    int l;
    int r;
    int n;
};
bool operator<(const seg &a,const seg &b)
{
    return a.l>b.l;
}
int main(void)
{
    int n;
    cin>>n;
    seg *a=new seg[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].l>>a[i].r;
        a[i].n=i+1;
    }
    sort(a,a+n);
    for(int i=1;i<n;i++)
    {
        if(a[i].r>=a[i-1].r)
        {
            cout<<a[i-1].n<<" "<<a[i].n<<endl;
            return 0;
        }
        else if(a[i-1].l==a[i].l)
        {
            cout<<a[i].n<<" "<<a[i-1].n<<endl;
            return 0;
        }
    }
    cout<<"-1 -1"<<endl;
    return 0;
}
