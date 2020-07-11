#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merging(int arr[],int f, int m ,int r)
{
    int s1= m-f+1;
    int s2= r-m;
    int t1[s1],t2[s2];
    for(int i=0;i<s1;i++)
    t1[i]=arr[f+i];
    for(int i=0;i<s2;i++)
    t2[i]=arr[m+1+i];

    int i=0,j=0,k=f;
    while(i<s1 && j<s2)
    {

        if(t1[i]>t2[j])
        {
            arr[k]=t2[j];
            j++;

        }
        else
        {

            arr[k]=t1[i];
            i++;
        }
        k++;
    }
    while(i<s1)
    {

        arr[k]=t1[i];
        i++;
        k++;
    }
    while(j<s2)
    {

        arr[k] = t2[j];
        j++;
        k++;
    }


}
void m(int arr[],int f,int r)
{

    if(f<r)
    {

        int mid = (f+r)/2;
        m(arr,f,mid);
        m(arr,mid+1,r);
        merging(arr,f,mid,r);
    }
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];

m(arr,0,n-1);
for(int i =0 ;i<n;i++)
    cout<<arr[i]<<endl;

}
