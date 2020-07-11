//also concept related to virtual class
#include<iostream>
using namespace std;
 void sun();
class vishu
{
    public:
    void fun()
    {
        cout<<"my name is vishu chhabra"<<endl;

    }
};
class reetu :public vishu
{
    public:
    void sun()
    {
        cout<<"my caste is chhabra "<<endl;
    }
};
int main()
{
    vishu *s;
    reetu f;
    f.sun();
    s->fun();
    s=&f;
    s->fun();
   //it will give error because it is function of base class// s->sun();
    return 0;

}
