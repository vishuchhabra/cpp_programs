//important program based on virtual function
#include<iostream>
using namespace std;
class vishu

{
public:

    virtual void fun()
    {
        cout<<"my name is vishu"<<endl;
    }
    void sun()
    {
        cout<<"my caste is chhabra"<<endl;

    }
};
class reetu : public  vishu
{
    public:
    virtual void fun()//important program based on virtual function
    {

        cout<<"my name is reetu "<<endl;

    }
    void sun()
    {
        cout<<"my caste is bala"<<endl;

    }
};
int main()
{

    vishu *p;
    reetu r;
    p=&r;
    p->fun();
    p->sun();
    return 0;

}
