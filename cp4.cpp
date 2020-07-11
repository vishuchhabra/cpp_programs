#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rev=0;
    cin>>n;
    while(n)
    {
        int res = n%10;
        n=n/10;
        rev = (rev *10) + res ; 
    }
    cout<<rev<<endl;
    return 0;
}