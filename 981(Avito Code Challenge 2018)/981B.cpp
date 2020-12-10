#include<iostream>
#include<map>
#include<iterator>
typedef long long ll;
using namespace std;
int main(void)
{
   ll n;
   ll k,w;
   ll m=0;
   map<ll,ll> x;
   map<ll,ll>::iterator iter;
   cin>>n;
   while(n--)
   {
       cin>>k>>w;
       x[k]=w;
   }
   cin>>n;
   while(n--)
   {
       cin>>k>>w;
       iter=x.find(k);
       if(iter!=x.end())
       {
           {
               if(iter->second<w)
                    iter->second=w;
           }
       }
       else
       {
           x[k]=w;
       }
   }
   for(iter=x.begin();iter!=x.end();iter++)
   {
       m+=iter->second;
   }
   cout<<m<<endl;
}
