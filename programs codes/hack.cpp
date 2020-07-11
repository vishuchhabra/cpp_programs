#include<iostream>
using namespace std;
int main()
{
    int u[5];
    for(int h=0;h<5;h++)
    {
        cin>>u[h];
    }
    int max=0,min=0;
    max=u[0];
    for(int y=1;y<5;y++)
    {
        if(max<u[y])
        {
        max=u[y];
        }
    }
    min=u[0];
    for(int yt=1;yt<5;yt++)
    {
        if(min>u[yt])
        {
        min=u[yt];
        }
    }
    int total=0;
    for(int p=0;p<5;p++)
    {
        total=total+u[p];
    }

    cout<<total-max<<"  "<<total-min;
    return 0;
}
