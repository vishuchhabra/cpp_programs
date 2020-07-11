#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    
    int m1, n1;
    cout<<"size of 1"<<endl;
    cin>>m1>>n1;
    int m2 ,n2;
    cout<<"size of 2"<<endl;
    cin>>m2>>n2;
    int arr1[m1][n1] , arr2[m2][n2];

    cout<<"1.elements:"<<endl;
    for(int i=0;i<m1;i++)
    for(int j=0;j<n1;j++)
    cin>>arr1[i][j];

     cout<<"2.elements:"<<endl;
    for(int i=0;i<m2;i++)
    for(int j=0;j<n2;j++)
    cin>>arr2[i][j];

     int sum =0;
    
    if(n1==m2){
        cout<<"multiplication is :"<<endl;
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            for(int k=0;k<n1;k++ )
            {
                sum = sum + arr1[i][k]* arr2[k][j];

            }
            cout<<sum<<" ";
            sum=0;

        }
        cout<<endl;
    }
    }
    else
    cout<<"multiplication is not possible"<<endl;
    return 0;
}
  