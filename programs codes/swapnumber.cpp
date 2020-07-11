#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    int z;
    z=x;
    x=y;
    y=z;
}
int main()
{
    cout<<"enter the value of a and b respectively"<<endl;
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<"after swaping the number is following as "<<endl<<"a="<<a<<endl<<"b="<<b;
    return 0;
}
