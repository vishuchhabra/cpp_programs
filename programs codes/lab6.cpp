
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class vishu
{
public:
    int siz;
    vishu()

    {

        cin>>siz;
    }
};
template <class x>
class arra:public vishu
{
private:
    x  *arr;
 public:
     arra()
     {


         arr =new x [siz];

     }
 void enter()
 {

     cout<<"enter the elements of size "<<siz<<endl;
     for(int i=0;i<siz;i++)
     {

         cin>>arr[i];
     }
 }
 void print()
 {


   for(int j=0;j<siz;j++)
     {

         cout<<arr[j]<<endl;
     }
 }

 arra( const arra & e)
 {
     for(int u=0;u<siz;u++)
     {
         arr[u]=e.arr[u];
     }
     siz=e.siz;
 }

};
int main()
{

cout<<"enter the value of size of array "<<endl;
    arra <float>f,*d,*y;

    d=&f;
    d->enter();
    cout<<"your elements are following as"<<endl;
     d->print();
      cout<<"type any word  to get the values by copy constructor"<<endl;

      arra <float>t;
     t=f;
     y=&t;

     y->print();
     return 0;
}


