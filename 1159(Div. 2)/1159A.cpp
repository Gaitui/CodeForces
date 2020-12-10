#include<iostream>
typedef long long ll;
using namespace std;
int main(void)
{
    int n;
    string a;
    int s=0;
    cin>>n;
    cin>>a;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='-')
        {
            if(s>0)
            {
                s--;
            }
        }
        else
        {
            s++;
        }
    }
    cout<<s<<endl;
    return 0;
}
