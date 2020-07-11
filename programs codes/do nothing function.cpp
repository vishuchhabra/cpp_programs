//program based on do nothing function
#include<iostream>
using namespace std;
class vishu
{

public:
    void fun()=0;//this =0 will tells to compiler that this function is do nothing function
void sun()

{
    cout<<"my name is khan"<<endl;
}//important rule we cant make the object of that class in which do nothing function is present
};
int main()
{
    vishu r;
  //  r.fun();//tis will give error basically
    r.sun();
    return 0;

}
