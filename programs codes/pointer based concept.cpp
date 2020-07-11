#include<iostream>
using namespace std;
class vishu
{
    private:
    int x,y;
    public:
        void setd(int a,int b)
        {
            x=a;
            y=b;
        }
        void print()
        {
            cout<<"your values are following as"<<endl;
            cout<<x<<" "<<y<<endl;
        }
};
class reetu :public vishu
{
public:
    void fun()
    {
        cout<<"enjoy your life with full of confidence"<<endl;
    }
};
int main()
{
    vishu *p,y;
    reetu *i,o;
    p=&o;
    p->setd(56,57);
    p->print();//result pointer of parent class  can access the adress of child class but reverse is not possible
   // i=&y;
   // i->setd(345,345);//this will error which is converse of upper list thing
  //  i->print();
    return 0;

}
