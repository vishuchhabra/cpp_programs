#include<iostream>
using namespace std;
class reetu;
class vishu;
void ritu();
//friend class vishu;
class vishu
{
    public:

    void ritu()
    {

        cout<<"my name is vishu chhabra"<<endl;

    }
};
class reetu
{
    public:
    friend  class vishu;
};
int main()
{

    reetu f;
    vishu d;
    d.ritu();

ritu();
    return 0;
}
