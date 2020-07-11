//pogram related to this pointer
#include<iostream>
using namespace std;
class comp
{
    private:
    int x;
    public:
        void setd(int y)
        {
            x=y;

        }
        comp great(comp u)
        {
            if(u.x>x)
                return u;
                if(x>u.x)
                    return *this;//important use of this pointer in the program


        }
        void show()
        {

            cout<<"your values are following as "<<endl<<x;
        }

};
int main()
{
    comp x1,x2,x3;
    x2.setd(45);
    x1.setd(34);
    x3=x2.great(x1);
    x3.show();
    return 0;
}
