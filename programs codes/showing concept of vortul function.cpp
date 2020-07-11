//program show need of virtual class
#include<iostream>
using namespace std;
class vishu
{
    public:
void fun()
{
cout<<"my name is khan "<<endl;

}
virtual void sun()
{

    cout<<"my name is vishu chhabra"<<endl;
}
};
class reetu :public vishu
{
    void fun()
    {
        cout<<"my name is bhegam "<<endl;
    }
    void sun()
    {
        cout<<"my name is reetu chhabra"<<endl;
    }
};
int main()
{
    vishu *p,t;
    reetu y;
    p=&y;
    p->fun();//without virtual  function which will give output of fun function of parent class basically which we dont want
 p->sun();//with virtual function concept
    return 0;
}

