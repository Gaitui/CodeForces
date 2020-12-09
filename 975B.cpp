#include<iostream>
#include<cstdlib>
#include<time.h>
#include<iomanip>
typedef long long llu;
using namespace std;
int main(void)
{
    llu in[14];
    llu Max=0;
    llu tscore;
    llu div,mod;
    llu temp;
    srand(time(NULL));
    for(int i=0;i<14;i++)
    {
        cin>>in[i];
        /*do
        {
            in[i]=rand()%99;
        }while(!(in[i]%2==1 || in[i]==0));
        cout<<setw(3)<<in[i];*/
    }
    //cout<<endl;
    for(int i=0;i<14;i++)
    {
        tscore=0;
        div=in[i]/14;
        mod=in[i]%14;
        for(int j=0;j<14;j++)
        {
            if(i==j)
            {
                temp=0;
            }
            else
            {
                temp=in[j];
            }
            if((j<=(i+mod)%14 && i+mod>13) || (j>i && j<=i+mod))
            {
                //cout<<setw(3)<<temp+div+1;
                if((temp+div+1)%2==0)
                {
                    tscore=tscore+temp+div+1;
                }
            }
            else
            {
                //cout<<setw(3)<<temp+div;
                if((temp+div)%2==0)
                {
                    tscore=tscore+temp+div;
                }
            }
        }
        //cout<<" score="<<tscore<<endl;
        if(tscore>Max)
            Max=tscore;
    }
    cout<<Max<<endl;
}
