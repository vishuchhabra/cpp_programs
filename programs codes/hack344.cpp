#include<iostream>
using namespace std;
int main()
{

int n;

cin>>n;
int j=(n-1)/2;
int arr[n];
int v;
for(int i=0;i<n;i++)
cin>>arr[i];

for(int p=0;p<n-1;p++)
for(int q=p+1;q<n;q++)
{

    if(arr[p]>arr[q])
    {
        v=arr[q];
        arr[q]=arr[p];
        arr[p]=v;

    }
}
cout<<arr[j];

}
