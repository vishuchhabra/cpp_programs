#include<iostream>
using namespace std;
int main()
{

    char f[5];
    for(int i=0;i<5;i++)
    {

        cin>>f[i];
    }
    for(int y=0;y<4;y++)

    {
        int val=f[y];
        int loc =y;
        for(int p=y+1;p<5;p++)

        {
            if(f[y]>=f[p])
            {

                loc =p;
                f[y]=f[loc];
            }

        }

    }
    for(int u=0;u<5;u++)
    {

        cout<<f[u];
    }
}
