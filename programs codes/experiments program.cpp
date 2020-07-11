#include<iostream>
using namespace std;
//template <class x>
class complex
{
    private:
           int x,y;
    public:
        void setd(int a,int b)
        {
            x=a;
            y=b;

        }
        void show()
        {

            cout<<"your complex number is following as "<<endl;
            cout<<x<<"+i"<<y<<endl;
        }
    friend complex  operator +(complex e,complex f)
        {

            complex temp;
            temp.x=e.x+f.x;
            temp.y=e.y+f.y;
            return (temp);
        }
friend complex operator -(complex e,complex f)

{
    complex temp;
            temp.x=e.x-f.x;
            temp.y=e.y-f.y;
            return (temp);
}
};
int main()
{

   complex c1,c2,c3,c4;
   c1.setd(3,7);
   c2.setd(7,1);
   c3=c1+c2;
   c3.show();
   c4=c1-c2;
   c4.show();


}
