#include<iostream>
using namespace std;
class A
{

private:
    int a;
public:
    void dispa()
    {
        a=10;
        cout<<"value of  a is following as "<<endl<<a<<endl;
    }
};
class B:public A
{

private:
    int b;
public:
    void dispb()
    {

        b=20;
        cout<<"value of b is following as "<<endl<<b<<endl;
    }
};
class C:public A
{

private:
    int c;
public:
    void dispc()
    {

        c=30;
        cout<<"value of c is following as "<<endl<<c<<endl;
    }
};
class D :public B,public C
{

private:
    int d;
public:
  void  dispd()
   {
       d=40;
       cout<<"value of d is following as "<<endl<<d<<endl;
   }
};
int main()
{

    D obj;
    obj.dispd();//this is always correct no error at compilation time
    obj.dispb();
    obj.dispc();
  //  obj.dispa();//ris will give error ambicuting due to duplicaccy for solving this we can follow following setup
  obj.B::dispa();

 obj.C::dispa();//one way is this and another is virtual class
    return 0;
}
