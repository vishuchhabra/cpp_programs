//unary operator overloading
#include<iostream>
#include<conio.h>
using namespace std;
class vishu
{
int a,b;
public:
  void   getd(int x,int y)

    {
        a=x;
        b=y;

//important program based on opertor overloading

    }

    void show()
    {
        cout<<a<<"+i"<<b<<"";
    }
  vishu operator -()
  {
      vishu d;
      d.a=-a;
      d.b=-b;
      return (d);
  }

};
int main()
{

    vishu c1,c2,c3;
    cout<<"enter the real and imaginary part of the complex number "<<endl;
    int p,q;
    cin>>p>>q;
    c1.getd(p,q);
    c2=-c1;
    cout<<"yours complex number is following as "<<endl;
    c1.show();
    cout<<endl<<"after overloading task yours complex number is following as "<<endl;
    c2.show();
    return 0;

}
