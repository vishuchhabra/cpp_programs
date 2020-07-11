#include<iostream>
using namespace std;
class vishu
{

    static int r;
public:
    static void setd(int x)
    {
        r=x;
    }
    static void disp()

    {
        cout<<r;
    }
};
int vishu::r=67;;
int main()
{
//    vishu::setd(5);
    vishu::disp();
    return 0;

}
