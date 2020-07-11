//count the minimum number  of steps for conversion of string from one to another using recursion
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int  min(int i,int j,int k )
{
    if(i<j && i<k)
    return i;
    else if(j<i && j<k)
    return j;
    else
    return k;
}
int check_step(string str1,string str2,int m,int n)
{
    if(m==0)
    return n;
    if(n==0)
    return m;
    if(str1[m-1]==str2[n-1])
    return  (check_step(str1,str2,m-1,n-1));
    return 1 + min(check_step(str1,str2,m,n-1)//for inserting 
    ,check_step(str1,str2,m-1,n)//for removing 
    ,check_step(str1,str2,m-1,n-1));//for  replacing 
}
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    cout<<check_step(str1,str2,str1.length(),str2.length())<<endl;
    return 0;
}