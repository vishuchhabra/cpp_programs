//operator overloading using binary operands and friend function
#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
   int a,b;
public:
    void getd(int x,int y)
    {

        a=x;
        b=y;

    }
    void show ()
    {

        cout<<"your complex number is following as "<<endl<<a<<"+i"<<b<<endl;

    }
friend complex operator +(complex ,complex );

};
complex operator+(complex d1,complex d2)
{
 complex temp;
 temp.a=d1.a+d2.a;//friend function cant acess directly the members of class
 temp.b=d1.b+d2.b;
 return (temp);

}
int main()
{
    complex d1,d2,d3;
    d1.getd(45,45);
    d2.getd(23,45);
    d3= d1+d2;//this is another way to write this thing operator +(d1,d2);

d3.show();

    return 0;


}
