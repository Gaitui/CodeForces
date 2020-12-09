#include<iostream>
using namespace std;
int main(void)
{
    int a[50];
    int b[1001]={0};
    int n;
    int x=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(b[a[i]]==0)
            x++;
        b[a[i]]++;
    }
    cout<<x<<endl;
    for(int i=0;i<n;i++)
    {
        if(b[a[i]]==1)
            cout<<a[i]<<" ";
        else
            b[a[i]]--;
    }
    cout<<endl;
    return 0;
}
