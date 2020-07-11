#include<iostream>
#include<bits/stdc++.h>
using namespace  std;
int LCM(int m ,int n)
{
    int big;
    big =max(m,n);
    for(int i=big;i<=m*n;i++)
    if(i%m==0 && i%n==0)
    return i;
}
int HCF(int m, int n)
{
    int small;
    small =min(m,n);
    for(int i=small;i>=1;i--)
    if(m%i==0 && n%i==0)
    return i;

}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<"LCM:"<<LCM(m,n)<<endl;
    cout<<"HCF:"<<HCF(m,n)<<endl;
    return 0;
}