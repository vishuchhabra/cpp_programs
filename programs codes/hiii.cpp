#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int count=0;
    for(int j=0;j<n;j++)
    {

        if(j%2==0&&arr[j]%2==0)
            count++;
             if(j%2!=0&&arr[j]%2!=0)
            count++;

    }
    cout<<count;
}
