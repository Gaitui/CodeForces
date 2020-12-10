#include<iostream>
#include<algorithm>
typedef long long ll;
using namespace std;
int main(void)
{
    int n;
    int g[100]={0};
    double sum=0;
    int redo=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>g[i];
        sum+=g[i];
    }
    sort(g,g+n);
    for(int i=0;i<n;i++)
    {
        if(sum/n>=4.5)
        {
            break;
        }
        else
        {
            sum=sum-g[i]+5;
            redo++;
        }
    }
    cout<<redo<<endl;
    return 0;
}
