#include<iostream>
using namespace std;
int main()
{
    int *x,*y,a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a>>b;
    x=&a;
    y=&b;

    cout<<x<<endl<<*x<<endl;
    cout<<y<<endl<<*y<<endl;
    return 0;
}
