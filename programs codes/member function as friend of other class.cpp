#include<iostream>
using namespace std;
class der;
class base;
 friend void base::setd(der);
class base
{

public:
    void setd (der );

};
void base::setd(der s)
    {
        s.val=10;
        cout<<"my name is khan"<<endl;
    }
class der

{
private:
    int val;
public:
    friend void base::setd(der);
};

int main()
{
    base r;
    der f;
    r.setd();
    return 0;

}
