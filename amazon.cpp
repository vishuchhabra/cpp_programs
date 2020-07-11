#include<iostream>
using namespace std;
int main()
{
    int n,p,q;
    cin>>n>>p>>q;
    int arr[n*2];
    int arr2[q*2];
    for(int i=0;i<n*2;i++)
        cin>>arr[i];
    for(int j=0;j<q*2;j++)
        cin>>arr2[j];
    int temp[200005]={0};
    for(int i=0;i<(n*2);i++)
    {
        if(i%2)
        {
        temp[arr[i]+1]=temp[arr[i]+1]-1;

        }
        else
        {
            temp[arr[i]]=temp[arr[i]]+1;

        }
    }
    for(int i=1;i<200005;i++)
        temp[i]=temp[i]+temp[i-1];


    for(int i=0;i<200005;i++)
    {

        if(!i)
        {

            if(temp[i]>=p)
                temp[i]=1;
            else
                temp[i]=0;
        }
        else
        {
            if(temp[i]>=p)
                {
                temp[i]=1;
                temp[i]=temp[i]+temp[i-1];
                }
            else
                {
                temp[i]=0;
                temp[i]=temp[i]+temp[i-1];
                }
        }
    }


    for(int i=0;i<q*2;i+=2)
    {
        cout<<temp[arr2[i+1]]-temp[arr2[i]-1]<<endl;

 }


}
