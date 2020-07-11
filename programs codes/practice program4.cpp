#include<iostream>
using namespace std;
class vishu
{

    static int x;
    public:
    vishu()
    {
      x++;
      if(x==2)
      {
          exit(0);
      }
    }
};
int vishu::x=0;
int main()
{
    vishu d,g;
    cout<<"my name is khan "<<endl;
    cout<<"this showing there is only single object is exiting in the program "<<endl;

    return 0;

}
