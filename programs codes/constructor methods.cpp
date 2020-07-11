//example of the program in which constructor overloading is shown following as :-
#include<iostream>
using namespace std;
class student
{
    public:
int a,b;
public:
     student(int x,int y)
    {//constructor 1

        a=x;
        b=y;
        cout<<"values are follwing as "<<endl<<a<<" "<<b;

    }
  //tudent (int x1)
  //{


   // a=x1;
   // b=0;//constructor 2
 // cout<<"values of the constructor 2 are the follwing as "<<endl<<a<<" "<<b;
  //}


     student()
    {
//default constructor
    }};
    int main ()
    {

       student c1(2,4);
    student c3(c1);

cout<<"values of copy constructor are follwing as "<<endl<<c3.a<<" "<<c3.b;
    return 0;

    }

