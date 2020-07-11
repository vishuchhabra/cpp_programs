#include<iostream>
using namespace std;
class base
{

private:
public:
    void fun()
    {

        cout<<"my name is khan "<<endl;

    }
};
class derived
{

public:
    void sun()

    {
        base i;
        i.fun();
    }
};
int main()
{

    derived h;
    h.sun();
    return 0;

}
