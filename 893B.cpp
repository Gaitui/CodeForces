#include<iostream>
#include<math.h>
using namespace std;
int main(void)
{
    long long unsigned int n;
    long long unsigned int no=1;
    long long unsigned int pre=1;
    int k=2;
    cin>>n;
    while(n>=no)
    {
        if(n%no==0)
        {
            pre=no;
        }
        no=no*2+pow(2,k);
        //cout<<no<<endl;
        k+=2;
    }
    cout<<pre<<endl;
    return 0;
}
