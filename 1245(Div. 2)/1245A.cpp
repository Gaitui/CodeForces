#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(void)
{
    int N;
    cin>>N;
    while(N--)
    {
        int a,b;
        cin>>a>>b;
        int t;
        if(a<b)
        {
            swap(a,b);
        }
        while(1)
        {
            t=a%b;
            if(t!=0)
            {
                a=b;
                b=t;
            }
            else
            {
                break;
            }
        }
        if(b!=1)
        {
            cout<<"Infinite"<<endl;
        }
        else
        {
            cout<<"Finite"<<endl;
        }
    }
    return 0;
}
