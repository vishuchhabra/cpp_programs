#include<iostream>
using namespace std;
int main()
{
    string n;
    cin>>n;
    if(n[8]='A')
    {
for(int i=0;i<=7;i++)
{
    cout<<n[i];
}
    }
    else
  int p=n[0]-'0';
    int q=n[1]-'0';

    int h= (p*10)+q ;

        for(int ir=2;ir<=7;ir++)
{
    cout<<n[ir];
}
return 0;
}

