//important program based on the paper view ie somewhat typical
#include<iostream>
using namespace std;
class x;//it is neceesey to make
class y;
class x
{

private:
    int a;
public:
    x()
    {

        a=50;
    }
    void show()
    {

        cout<<"a="<<a<<endl;
    }
  friend void exe(x *,y *);
};
class y
{

private:
    int b;
public:
    y()
    {

        b=56;

    }
    void show()
    {

        cout<<"b="<<b<<endl;
    }
    friend void exe(x *,y *);
};
void exe(x *p,y *q)
{

    int d;
    d=p->a;
    p->a=q->b;
    q->b=d;
}
int main()
{

    x f;
    y d;
    exe(&f,&d);
    f.show();
    d.show();

    return 0;
}
