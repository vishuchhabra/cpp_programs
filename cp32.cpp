//intilization of 2-D array using new
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    // int **arr;
    // arr= new int*[3];
    // for(int j=0;j<3;j++)
    // arr[j]=new int[3];
    int arr[3][3];
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    cin>>arr[i][j];

    //one way sort(&arr[0][0],&arr[0][0]+3);//
    sort(arr[1],arr[1]+3);
    cout<<endl<<endl;
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    cout<<arr[i][j]<<endl;;


}