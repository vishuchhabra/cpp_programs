#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

bool g(int a , int b)
{return a>b;
}
int main()
{
    int arr[]={23,1,25,2,78,1,67};
    sort(arr,arr+7,g);
    for(int i=0;i<7;i++)
    cout<<arr[i]<<endl;
    return 0;
}