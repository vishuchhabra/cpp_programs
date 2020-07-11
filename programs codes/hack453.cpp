#include<iostream>
using namespace std;
int main()
{
  int i;
  cin>>i;
  if(i>1918)
  {
  if((i%400==0)||((i%4==0 ) && (i%100!=0)))
  cout<<"12.09."<<i;

  else
  cout<<"13.09."<<i;
  }
  if(i<1918)
  {
    if(i%4==0)
   cout<<"12.09."<<i;

    else
  cout<<"13.09."<<i;
  }
}

