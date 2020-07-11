#include<iostream>
using namespace std;
int main()
{

    int a[5];
    cout<<"enter any five numbers"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];

    }
    cout<<"number without short is following as "<<endl;
for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;

    }
    for(int y=0;y<4;y++)
    {
        for(int u=0;u<4;u++)
            if(a[u]>a[u+1])
        {

            int g;
            g=a[u];
            a[u]=a[u+1];
            a[u+1]=g;
        }
    }
    cout<<"number with sort is following as "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;

    }

    return 0;
}
