#include <iostream>
#include <string.h>
using namespace std;

int main() {
char a[58],b[78];
cin>>a;
cin>>b;
int x=0,y=0;
x=strlen(a);
y=strlen(b);
cout<<x<<" "<<y<<endl;
cout<<a<<b;
for(int p=x-1;p>=0;p--)
{
    cout<<a[p];
}
  cout<<" ";
  for(int pe=y-1;pe>=0;pe--)
{
    cout<<b[pe];
}

    return 0;
}

