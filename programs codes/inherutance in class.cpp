//important program  based on destructor in the class
#include<iostream>
using namespace std;
class vishu
{
public:
    ~vishu()
{
    cout<<"my name is khan"<<endl;
}
};
class reetu:public vishu
{
public:
    ~reetu()//impot
    {
     cout<<"am from abohar "<<endl;
    }
};
int main()
{

   vishu c;
   reetu g;
   return 0;
}




