#include<iostream>
#include<vector>
#include<algorithm>
#define ui unsigned int
using namespace std;
int main(void)
{
    ui a[4];
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    sort(a,a+4);
    cout<<a[3]-a[0]<<" "<<a[3]-a[1]<<" "<<a[3]-a[2]<<endl;
    return 0;
}
