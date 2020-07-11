//increment and decrement operator overloading
#include<iostream>
#include<conio.h>
using namespace std;
class number
{
    int x;
    public:
        void getd(int p)
        {x=p;

        }
        void show()
        {

            cout<<endl<<"your number is following as "<<x<<endl;
        }
        number operator ++()//this show the preincrement becuse there is now int present
        {

            number v;
            v.x=++x;
        return v;        }
number operator ++(int )//in this if we type int in bracket then it will show post increment
{
    number g;
    g.x=x++;
    return g;
}
};
int main()
{

    number c1,c2,c3;
    cout<<endl<<"enter the any number "<<endl;
    int u;
    cin>>u;
    c1.getd(u);
    c1.show();
    c2=c1.operator ++();// this may be also be written as c2=++c1;
    c1.show();
    c2.show();
    c2=c1++;//for post incremnet coding but no any way to  write in form of opreator same in case of pre increment
    c2.show();
    c1.show();
    return 0;

}






