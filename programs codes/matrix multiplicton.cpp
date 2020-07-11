#include<iostream>
using namespace std;
int main()
{
    char a[2][2],b[2][2],c[2][2];
    cout<<"enter the elements of first matrix"<<endl;
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
    {

        cin>>a[i][j];
    }
  cout<<"enter the elements of second matrix"<<endl;
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
    {

        cin>>b[i][j];
    }

  for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
        {
            c[i][j]=0;
        }
    cout<<"multiplication is following as "<<endl;
    for(int r=0;r<2;r++)
        for(int s=0;s<2;s++)
            for(int t=0;t<2;t++)
    {


        c[r][s]=c[r][s]+(a[r][t]*b[t][s]);
    }

    cout<<c[0][0]<<c[0][1];
}
