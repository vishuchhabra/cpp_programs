#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
bool issorted2(int arr[], int s)
{
    if(s==0 || s==1)
    return true;
    int t = issorted2(arr+1 , s-1);
    if(!t)
    return false;
    if(arr[0]<arr[1])
    return true;
    else
    return false;
}
bool isSorted(int arr[], int s)
{
    if(s==0 || s==1)

    return true;
    if(arr[0]>arr[1])
    return false;

    return isSorted(arr+1,s-1);

}
int main()
{
    int n;
    cin>>n;//for size
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<issorted2(arr,n)<<endl;
    return 0;

}