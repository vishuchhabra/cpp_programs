#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int aver_age(int a, int x)
{
    int n =a-x;
    
    return (n*(a+1)-((n*(n-1))/2));
}

int main()
{
    int cas;
    cin>>cas;
    int m ,n;
    for(int i=0;i<cas;i++)
    {
    cin>>m>>n;
    cout<<aver_age(n ,m)<<endl;
    }
    return 0;
}
