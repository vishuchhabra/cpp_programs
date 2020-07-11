#include<iostream>
//#include<stdlib.h>
using namespace std;
int main()
{

    char c[20];
  // cin.get(c,20);
    //cout<<"value is following as "<<endl<<c;
    char d[20];
    cout<<"enter the second string "<<endl;//function like getline and get cant work more than single time in one program
    cin.getline(d,20);
    cout<<d;

    return 0;
}
