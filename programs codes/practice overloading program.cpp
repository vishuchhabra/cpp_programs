#include<iostream>
using namespace std;
class complex
{

    int a,b;
public:
    void setd(int x,int y)

    {
        a=x;
        b=y;

    }
    void disp()
    {

        cout<<"your complex number is following as "<<endl<<a<<"+i"<<b<<endl;
    }
   friend complex operator + (complex,complex );
};
complex operator +(complex c,complex d)
{

    complex temp;
    temp.a=c.a+d.a;
    temp.b=c.b+d.b;
    return (temp);
}
int main()
{


    complex c;
    c.setd(4,7);
//    c3.disp();
    complex c2,c3;
 c2.setd(7,4);
    c3=c+c2;
     c3.disp();
    return 0;


}
