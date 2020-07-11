#include<iostream>
#include<conio.h>
using namespace std;
class complx
{int a,b;
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
    friend void operator +(complex ,complex );

};
/*complex operator+(complex d1,complex d2)
{
 complex temp;
 temp.a=

}*/
int main()
{
    complex d1,d2,d3;
    d1.a=5;
    d1.b=56;
    cout<<d1.a<<endl<<d1.b;
    return 0;


}
