#include<iostream>
using namespace std;
class vishu

{
public:
   virtual void fun()=0;//this is known as pure virtual function and this function is known as do nothing function
    void sun()
    {

        cout<<"my name is khan i am from abohar "<<endl;

    }

};
class reetu:public vishu

{
public:
    void fun()
    {

        cout<<"this is part of overriding "<<endl;

    }
};


int main()
{
    //vishu *p;
   //this will error// p->sun();
reetu y;
//p=&y;

y.fun();
y.sun();
vishu *u;//we cant make object of that class in which do nothing function is present
u=&y;//we cant make the object of that class in wg
u->fun();
    return 0;

}
