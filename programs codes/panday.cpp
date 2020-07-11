#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{

    int u;
    cout<<"enter the size of the array "<<endl;
    cin>>u;
    int y[u];

    cout<<"enter the elements of the array"<<endl;
    for(int p=0;p<u;p++)
    {
        cin>>y[p];

    }

cout<<"cyclic order elements are following as:"<<endl;
for(int l=0;l<u;l++)
{

    cout<<y[l]<<"\t";
}
cout<<endl;
   int e=0;
   int f=u-1;

for(int q=1;q<=u;q++)
{

    for(int g=f;g<=u-1;g++)
    {
        cout<<y[g]<<"\t";

    }

    for(int h=e;h<f;h++)
    {

        cout<<y[h]<<"\t";
    }
    cout<<endl;
    f--;
}
cout<<"TELL ME PANDAY MY APPROACH IS GOOD OR NOT???????????????"<<endl;
    return 0;
}

