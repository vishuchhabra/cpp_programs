#include<iostream>
using namespace std;
class der;
class base
{

public:
    void setd (der );

};

class der

{
private:
    int val;
public:
    //friend void base::setd(der);
    friend class base;
};
void base::setd(der s)
    {
        s.val=10;
        cout<<"my name is khan"<<endl<<"value is following as "<<endl<<s.val<<endl;;
    }

int main()
{
    base r;
    der f;
    r.setd(f);
    return 0;

}
