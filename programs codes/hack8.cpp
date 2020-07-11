
#include<iostream>
using namespace std;
int main()
{
    string n;
    cin>>n;
      int p=n[0]-'0';
    int q=n[1]-'0';
      int l;

    l=(p*10)+q;
    l+=12;
    if(n[8]='A')
    {
for(int i=0;i<=7;i++)
{
    cout<<n[i];
}
    }
    if(n[8]='P')

    cout<<l;
    for(int ir=2;ir<=7;ir++)
{
    cout<<n[ir];
}
return 0;
}
