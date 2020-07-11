#include<iostream>
using namespace std;
int fact(int n)
{
    if(n>1)
        return n*fact(n-1);
        else
        return 1;


}
int main()
{
int p;
cout<<"enter the number whose factorial you want to  find"<<endl;
cin>>p;
int y=fact(p);
cout<<y;

}
