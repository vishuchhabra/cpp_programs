#include<iostream>
using namespace std;
int main()
{
int m,n;
cin>>m>>n;
int count=0;
int arr[m];
for(int i=0;i<m;i++)
cin>>arr[n];
for(int j=0;j<m;j++)
for(int k=0;k<m;k++)
for(int l=0;l<m;l++)


    if((arr[l]-arr[k]==arr[k]-arr[j]==n)&&(j<k&&k<l))
    count++;

cout<<count;

}
