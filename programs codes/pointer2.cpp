#include<iostream>
using namespace std;
int main()
{
    int *p,*q,a;
    a=4;
   p=&q;

    cout<<a<<endl<<**p;
    return 0;
}
