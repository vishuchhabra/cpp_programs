#include<iostream>
using namespace std;
class x;
class y;
class x
{

private:
    int a;
public:
      x()
     {

         a=56;
     }
     void show()
     {

         cout<<"a="<<a<<endl;
     }
      friend void swa();
};
class y
{
    private:
    int b;
    public:
     y()

    {
        b=50;
    }
    void showd()
    {

        cout<<"b="<<b<<endl;
    }
   friend void swa();

};
void swa()
{
    x p;
    y q;
    int d;
    d=p.a;
    p.a=q.b;
    q.b=d;


}
int main()
{
  x r;
  y s;
  swa();
  r.show();
  return 0;

}
