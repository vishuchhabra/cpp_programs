//overloading based on
#include<iostream>
#include<conio.h>
using namespace std;
class complex{
int a,b;
public:
    void getd(int x ,int y)
    {
     a=x;
     b=y;
    }
friend ostream & operator<< (ostream& ,complex );
//friend istreeam & operator >>(istream &,complex &);
};
ostream & operator  <<(ostream& dout,complex c)//e cant make object of class ostream therefore we take reference of this class
{
    dout<<"a="<<c.a<<"b="<<c.b<<endl;
    return (dout);
}
int main()
{

    complex c1;
    c1.getd(3,5);
    complex c2;
    c2.getd(45,56);
    cout<<c1<<c2;
    return 0;
}
