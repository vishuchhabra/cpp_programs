//method of selection sort in c++ and also we have another method to solve the sort pr
#include<iostream>
using namespace std;
int main()
{
cout<<"enter the size of integer array"<<endl;
int u;
cin>>u;

    int  c[u];
    cout<<"enter the array elements of the size"<<" "<<u<<endl;

    for(int i=0;i<u;i++)
    {

        cin>>c[i];
    }
    for(int y=0;y<u-1;y++)
    {

        int min=c[y];//minimum value
        int loc=y;//carry minimum position
        for(int z=y+1;z<u;z++)
        {

            if(min>c[z])
            {

        loc=z;

            }
            int temp;
            temp=c[y];//basically swapping part i the program
            c[y]=c[loc];
            c[loc] =temp;
        }
    }
    cout<<"your sorted elements are following as "<<endl;
    for(int i=0;i<u;i++)
    {

        cout<<c[i]<<"\t";
    }
}
