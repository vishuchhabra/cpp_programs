#include<iostream>
#include<stdlib.h>
using namespace std;

class A
{
    public:
 void fun()
 {

     cout<<"this is class A"<<endl;

 }
};
 class B:virtual public A


 {
     public:
     void sun()
     {

         cout<<"this is class B"<<endl;
     }
 };
class C:virtual public  A
{
    public:
    void run()
    {

        cout<<"this is class c"<<endl;
    }

};
class D:public B,public C
{

public:

    void mun()
    {

        cout<<"this is class D"<<endl;
    }
};
int main()
{

    D d;
    d.mun();
    d.fun();//d.B::fun();
    d.fun();//d.C::fun();

    return 0;
}
