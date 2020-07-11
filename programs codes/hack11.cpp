#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int b=0;
  for(int i=1;i<=n;i++)
  {
      int arr[2]={0};
      for(int j=0;j<2;j++)
      {
          cin>>arr[j];
      }
      int m=arr[0];
      int arr2[m];
      int count=0;
      for(int h=0;h<m;h++)
      {
          cin>>arr2[h];
          if(arr2[h]<=0)
          {
              count++;
          }

          if(count>=arr[1])
          {
              b=5;
          }
          else
          b=6;


      }
      if(b==5)
      cout<<"YES";
      else
      cout<<"NO";
      cout<<endl;

  }

}
