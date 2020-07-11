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

complex operator +(complex c)
{

    complex temp;
    temp.a=c.a+a;
    temp.b=c.b+b;
    return (temp);
}
};
int main()
{

    complex c1,c2,c3;
    c1.setd(24,12);
    c2.setd(12,24);
    c3=c1+c2;
    c3.disp();
    return 0;
}
