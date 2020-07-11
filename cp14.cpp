//header files
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

//driver program 
int main()
{
    int n;//cases
    cin>>n;
    int l = 2*n -1;//total length of array
    int arr[l][l]; //araay of size
    int k =n;    //for assigning the value
    int layer=n; //layers of traversal
    int pr= l; //for printing 

    //for layers
    for(int i=0;i<layer;i++)
    {
        for(int j=i;j<l;j++)
        {
            arr[i][j]=k;
            arr[j][i]=k;
            arr[j][l-1]=k;
            arr[l-1][j]=k;
        }
        k--;
        l--;

    }
    for(int i=0;i<pr;i++)  //printing steps
    {
        for(int j=0;j<pr;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;

    }
    return 0;


}