//method of bubble  sort method
#include<iostream>
using namespace std;
int main()
{
    char a[5];
    cout<<"enter the character of the array"<<endl;
    for(int i=0;i<5;i++)
{
    cin>>a[i];
}
for(int y=0;y<4;y++)

for(int l=y+1;l<5;l++)
{
    if(a[y]>a[l])
    {
       int e=a[y];
a[y]=a[l];
a[l]=e;
    }
}for(int i=0;i<5;i++)
{
    cout<<a[i];
}

return 0;
}
