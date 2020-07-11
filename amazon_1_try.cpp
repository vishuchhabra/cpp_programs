#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#define st sort
using namespace std;
int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    int arr1[n*2],arr2[q*2];
    for(int i=0;i<n*2;i++)
        cin>>arr1[i];
    for(int j=0;j<q*2;j++)
        cin>>arr2[j];
    int temp[200005]={0};
    for(int i=0;i<n*2;i++)
    {

        if(!(i%2))
            temp[arr1[i]]=temp[arr1[i]]+1;
        else
            temp[arr1[i]+1]=temp[arr1[i]+1]-1;

    }
    for(int j=1;j<200005;j++)
        temp[j]=temp[j]+temp[j-1];
    vector <int> eg;
    for(int t=0;t<200005;t++)
        if(temp[t]>=k)
        eg.push_back(t);
    int coun=0;
    for(int i=0;i<q*2;i+=2)
    {
        coun=abs(lower_bound(eg.begin(),eg.end(),arr2[i])-upper_bound(eg.begin(),eg.end(),arr2[i+1]));
        cout<<coun<<endl;
    }

    return 0;
}

