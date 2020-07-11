#include<iostream>
using namespace std;
class vishu
{
    private:

    public:
        void setd()
        {
            cout<<"your name is vishu chhabra"<<endl;
        }

};
int main()
{
    vishu *p,h;
    p->setd();//important concept based on how poiner cna csll the member function
    h.setd();

    return 0;
}
