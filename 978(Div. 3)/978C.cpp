#include<iostream>
using namespace std;
int main(void)
{
    int n;
    string l;
    int k=0;
    int d=0;
    cin>>n;
    cin>>l;
    for(int i=0;i<n;i++)
    {
        if(l[i]=='x')
        {
            k++;
        }
        else
        {
            if(k>=3)
                d=d+k-2;
            k=0;
        }
    }
    if(k>=3)
        d=d+k-2;
    cout<<d<<endl;
    return 0;
}
