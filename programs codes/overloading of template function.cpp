#include<iostream>
using namespace std;
 template <class x>

    void area(x a,x  b)
    {
        cout<<"area of rectangle is following as "<<endl<<a*b<<endl;
    }
    template<class y>
    void area(y c)
    {

        cout<<"area of circle is following as "<<endl<<3.14*c*c<<endl;
    }

int main()
{
//aread d;
area (2,14);
area(1);
return 0;
}
