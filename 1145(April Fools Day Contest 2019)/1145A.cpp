#include<iostream>
using namespace std;
int cut(int *a,int s,int e)
{
    int m=1;
    bool f=true;
    for(int i=s;i<e-1;i++)
    {
        if(a[i]>a[i+1])
        {
            f=false;
            break;
        }
    }
    if(f)
    {
        return e-s;
    }
    else if(e-s>1)
    {
        m=max(m,cut(a,s,(s+e)/2));
        m=max(m,cut(a,(s+e)/2,e));
    }
    return m;
}
int main(void)
{
    int N;
    cin>>N;
    int *a=new int[N];
    for(int i=0;i<N;i++)
        cin>>a[i];
    cout<<cut(a,0,N)<<endl;
}
