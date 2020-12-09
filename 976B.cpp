#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
int main(void)
{
    long long unsigned n,m,k,x,y;
    cin>>n>>m>>k;
    /*srand(time(NULL));
    n=rand()%10+1;
    m=rand()%10+1;
    k=rand()%(m*n);
    cout<<"n="<<n<<" m="<<m<<" k="<<k<<endl;*/
    if(k<=n-1)
    {
        cout<<k+1<<" 1"<<endl;
    }
    else
    {
        k=k-n;
        m--;
        x=k/m;
        y=k%m;
        //cout<<"x="<<x<<" y="<<y<<endl;
        cout<<n-x<<" ";
        if(x%2==0)
        {
            cout<<y+2<<endl;
        }
        else
        {
            cout<<m-y+1<<endl;
        }
    }
    return 0;
}
