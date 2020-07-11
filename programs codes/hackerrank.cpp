#include<iostream>
using namespace std;
int main()
{
   int n;
    cin>>n;
    int  u[n][n];
    for(int h=0;h<n;h++)
    {
    for(int g=0;g<n;g++)
    {
        cin>>u[h][g];
        cout<<"\t";
    }
cout<<endl;
    }
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        sum1=sum1+u[i][i];
        sum2=sum2+u[i][n-1-i];

    }
    if(sum2>sum1)
    {
    int p;
    p=sum2-sum1;
    cout<<p;}
    else
    cout<<sum1-sum2;
    return 0;

}

