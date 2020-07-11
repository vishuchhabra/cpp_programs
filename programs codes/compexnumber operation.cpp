#include<iostream>
#include<conio.h>
using namespace std;
class complex
{public:
  int a,b;
  public:
      get(int x ,int y)
      {a=x;
      b=y;
//good program based on adding to complex number s

      }
      complex add(complex c)
      {
          complex temp;
          temp.a=a+c.a;
          temp.b=b+c.b;
          return (temp);

    }//good program based on complex numbers like addition and substraction
      complex minus(complex c5)
      {
          complex tempd;
          tempd.a=a-c5.a;
          tempd.b=b-c5.b;
          return(tempd);
      }

};
int main(){

complex c1,c2,c3,c4;
cout<<"enter the value of real and imaginary part of first complex number"<<endl;
int p,q;
cin>>p>>q;
cout<<"enter the value of real and imaginary part of second complex number"<<endl;
int r,s;
cin>>r >>s;
c1.get(p,q);

c2.get(r,s);
c3=c1.add(c2);
cout<<"sum of your given two complex number are following as "<<endl;
cout<<c3.a<<"+"<<"i"<<c3.b<<endl;
cout<<"minus of second number from the first number is followig as"<<endl;
c4=c1.minus(c2);
cout<<c4.a<<"+"<<"i"<<c4.b<<endl;

return 0;

}



