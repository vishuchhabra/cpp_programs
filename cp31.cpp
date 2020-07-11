#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int  module(long long int n)
{
    return (((n*(4+((n-1)*3)))/2)%1000007);
}

int main()
{  
    long long int cases;
    cin>>cases;
    for(long long int i=0;i<cases;i++)
    {
        int n;
        cin>>n;
        cout<<module(n)<<endl;
    }

   return 0;
}