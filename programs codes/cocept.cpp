#include<iostream>
using namespace std;
class r
{

public:
    int a=7;

public:
    friend void swap();
};
class d
{

private:
    int c=7;

public:

    friend void swap();
};
void swap()

{
int x, y,z;
y=&a;
z=&c ;
x=y;
y=z;
z=x;

}
int main()
{
    r f;
    d s;
    swap();
    cout<<r.a;
    return 0;

}


