#include<iostream>
using namespace std;
int main(void)
{
    int N;
    cin>>N;
    int *a=new int[N];
    int m=99;
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
        m=min(m,a[i]);
    }
    cout<<(a[2]^m)+2<<endl;
}
