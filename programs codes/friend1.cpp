//simple program based on friend function
#include<iostream>
#include<conio.h>
using namespace std;
class number
{
    int a,b;
public:
    void getd(int x,int y)
    {
        a=x;
        b=y;

    }
void show()
{

    cout<<"your number are following as"<<endl<<"a="<<a<<endl<<"b="<<b;
}
//void friend sum( number);

};
//void sum(number c)
//{
  //  cout<<"sum of your given number is following as "<<endl<<c.a+c.b;
//}
int main()
{
    number c1,c2,c3;
    cout<<"enter any two numbers"<<endl;
    int x1,x2;

    cin>>x1>>x2;
    c1.getd(x1,x2);
    c1.show();
  //  sum(c1);
    return 0;
}
