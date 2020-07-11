//operator overloading using friend function on unary operand
#include<iostream>
#include<conio.h>
using namespace std;
class number
{
    int a;

public:
   void  getd(int x)
    {

        a=x;
    }

void show ()
{
    cout<<"your number is following as "<<endl<<a<<endl;
}
friend number operator -(number );

};//another way to make overload an opreator using friend function

number operator -(number f)
{
 number temp;
 temp.a=-f.a;
    return (temp);

}
int main()
{

    number c1,c2;
    c1.getd(-4);
    c1.show();
    c2=operator -(c1);//anoyher way to write c2=-c1;
   c2.show();
   return 0;

}
