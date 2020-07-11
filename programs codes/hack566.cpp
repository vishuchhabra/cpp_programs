#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int a[501]={0};
    int count=0;
    cin>>n>>m;
    string v[n];
    for(int e=0;e<n;e++)
        cin>>v[e];

    int arr[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    arr[i][j]=v[i][j]-'0';
    for(int k=0;k<n-1;k++){
    for(int l=k+1;l<n;l++){
    for(int p=0;p<m;p++)
    {
        if(arr[k][p]==1||arr[l][p]==1)
        count++;
    }
    a[count]++;
    count=0;}

    }
    int max=0;
    for(int y=0;y<501;y++)
    {
        if(a[y]!=0)
        if(max<=y)
        max=y;

    }
    cout<<max<<endl<<a[max];

return 0;
}
