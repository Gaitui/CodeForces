#include<iostream>
using namespace std;
int main(void)
{
    string name[5]={"Danil", "Olya", "Slava", "Ann","Nikita"};
    string k;
    int x=0;
    int y;
    /*for(int i=0;i<5;i++)
        cout<<name[i]<<endl;*/
    cin>>k;
    for(int i=0;i<k.size();i++)
    {
        for(int j=0;j<5;j++)
        {
            if(k[i]==name[j][0])
            {
                y=1;
                for(int w=0;w<name[j].size();w++)
                {
                    if(k[i+w]!=name[j][w])
                    {
                        y--;
                        break;
                    }
                }
                if(y==1)
                {
                    x++;
                }
            }
        }
    }
    if(x==1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
