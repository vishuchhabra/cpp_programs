//program based on virtual base class which is important for the all of us
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
class B:virtual public A //sequence don't matter at here we can also write public first then virtual
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
class C:public virtual A
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

    obj.dispa();
        return 0;
}
