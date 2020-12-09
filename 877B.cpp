#include<iostream>
using namespace std;
int main(void)
{
    string k;
    cin>>k;
    int amax=0,bmax=0;
    int anow=0,bnow=0;
    int a[5000],b[5000];
    int x=0;
    int Max=0,temp;
    for(int i=0;i<k.size();i++)
    {
        if(x==0)
        {
            if(k[i]=='a')
            {
                anow++;
            }
            else
            {
                a[amax]=anow;
                bnow=1;
                amax++;
                x++;
            }
        }
        else
        {
            if(k[i]=='b')
            {
                bnow++;
            }
            else
            {
                b[bmax]=bnow;
                anow=1;
                bmax++;
                x--;
            }
        }
    }
    if(x==0)
    {
        a[amax]=anow;
        amax++;
    }
    else
    {
        a[amax]=0;
        amax++;
        b[bmax]=bnow;
        bmax++;
    }
    if(bmax==0)
        cout<<a[0]<<endl;
    else
    {
        for(int start=0;start<amax-1;start++)
        {
            for(int End=start+1;End<amax;End++)
            {
                temp=0;
                for(int i=0;i<=start;i++)
                    temp+=a[i];
                for(int i=End;i<amax;i++)
                    temp+=a[i];
                for(int i=start;i<End;i++)
                    temp+=b[i];
                if(temp>Max)
                    Max=temp;
            }
        }
        cout<<Max<<endl;
    }
    return 0;
}
