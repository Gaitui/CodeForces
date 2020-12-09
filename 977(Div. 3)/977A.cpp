#include<iostream>
using namespace std;
typedef long long ll;
int main(void)
{
    ll n;
    int k,x,y;
    cin>>n>>k;
    if(k>n)
    {
        cout<<"0"<<endl;
    }
    else
    {
        while(n!=0 && k>0)
        {
            x=n%10;
            if(x==0)
            {
                k--;
                n/=10;
            }
            else if(x<k)
            {
                k=k-x-1;
                n/=10;
            }
            else
            {
                n-=k;
                break;
            }
        }
        cout<<n<<endl;
    }
    return 0;
}
