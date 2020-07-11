#include<iostream>
using namespace std;
class reetu;
class vishu
{
private :
    int a;
public:
   void fun()
    {
        cout<<"your name is vishu chhabra";
    }
    friend class reetu;
};



class reetu
{
public:
//    friend class vishu ;
 void h()
 {
vishu j;
j.a=9;
     }


};

int main()
{


    vishu c1;
    c1.fun();

    return 0;

}

