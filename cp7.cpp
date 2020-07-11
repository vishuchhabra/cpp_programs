//check reverse of  the palidrom
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using  namespace std;
int rev(long long int n)//for reversing the number
{
    long long int add=0;
    while(n)
    {
        long long int c=n%10;
        add=(add*10)+ c;
        n/=10;
    }
    return add;

}
bool check_pal(long long int n)
{
    if(rev(n)==n)
    return true;
    return false;   
}
int main()
{
    
    long long int n,cases;//scaning the number
    cin>>cases;
    for( long long int j=0;j<cases;j++)
    {
    cin>>n;
    for( long long int i=n+1;i<INT_MAX;i++)
    {
        if(check_pal(i))
        {
        cout<<i<<endl;
        break;
        }
    }
    }
    return 0;
}