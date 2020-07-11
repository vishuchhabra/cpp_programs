#include<iostream>
using namespace std;
class vbase
{


};
class base
{

public:
    base()
    {
        cout<<"construtor of base class have run"<<endl;

    }
};
class drive1:public base
{
public:
    drive1()
    {

        cout<<"constructor of derived 1 class have run"<<endl;
    }


};
class drive2:public drive1, public base//running status will depends upon sequence of constructor
{

public:
    drive2()
    {

        cout<<"constructor of second derived class have run"<<endl;
    }
};
int main()
{

    drive2 f;
    return 0;
}
