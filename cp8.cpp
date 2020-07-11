//fibonaci program
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
//functioning part

int fibN(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        
        return 1;
    }
    else
    {
        
        return  fibN(n-1)+fibN(n-2);
    }

} 
int main()
{
    int n;
    cin>>n;
    cout<<fibN(n)<<endl;
    return 0;
}