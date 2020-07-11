//important program using concept of swap
#include<iostream>
using namespace std;
template <class x>
void swaping (x &r, x &t)
{
    x y;
    y=r;
    r=t;
    t=y;

}
void wholeswaping(int q,int w,float e,float r)
{

    swaping(q,w);
    cout<<"swaped values are following as "<<endl;
    cout<<q<<" "<<w<<endl;
    swaping(e,r);

        cout<<"swaped values are following as "<<endl;
        cout<<e<<" "<<r;


    }


int main()
{

    wholeswaping(23,45,24.6,34.7);
    return 0;

}
