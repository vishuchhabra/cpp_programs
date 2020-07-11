#include<iostream>
using namespace std;
class vishu
{
int a,b;
public:
    vishu()
    {
        cout<<"construtor has been start"<<endl;
    }
~vishu()
{
    cout<<"destrutor has been ended";

}
};
int main()
{

    vishu d;
    return 0;
}
