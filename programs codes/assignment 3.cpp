#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class show
{
    public:
    virtual void area()=0;

};
class rectangle :public show
{

public:
    void area()
    {

        cout<<"enter the length and breadth respectively"<<endl;
        float a,b;
        cin>>a>>b;
        cout<<"area of your given dimensions's rectangle is following as "<<endl<<a*b<<endl;

    }


};
class circle :public show
{
    void area()
    {
    cout<<"enter the radius of given circle "<<endl;
    float r;
    cin>>r;
    cout<<"area of given circle is following as"<<endl<<3.14*r*r<<endl;
    }

};
class triangle :public show
{

    void area ()
    {
       cout<<"enter the height and base of given triangle "<<endl;
       float e,t;
       cin>>e>>t;
       cout<<"area of given triangle is following as "<<endl<<0.5*e*t<<endl;

    }
};
int main()
{
    while (6)
    {
    system("cls");
    show *p;
    cout<<"enter your choice from following as:"<<endl<<"1.for rectangle "<<endl<<"2.for circle "<<endl<<"3.for triangle "<<endl<<"4.for exititng from the program"<<endl;
    int y;
    cin>>y;
    rectangle r;
    circle d;
    triangle s;
    switch(y)
    {

    case 1:

        p=&r;
        break;
    case 2:

        p=&d;
        break;
    case 3:

        p=&s;
        break;
    case 4:
        exit(0);
    }
    p->area();
    system("pause");
    }
return 0;

}
