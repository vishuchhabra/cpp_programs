#include<iostream>
using namespace std;
class shape
{
public:
    virtual  void  areas()=0;
};
class rect :public shape
{

public:
    void  areas (float l,float b)
    {

        float a;
        a=l*b;
        cout<<"area is following as "<<endl<<a<<endl;

    }

};
class circle :public shape
{
public:
    void areas (int r)
{


   float d;
   d=3.14*r*r;
   cout<<"area is following as "<<endl<<d<<endl;
}
};

int main()
{

    shape *p;

    rect y;
    p=&y;
    p->areas(3,45);


}
