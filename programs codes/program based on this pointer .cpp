//important program showing the use of this pointer
#include<iostream>
using namespace std;
class vishu

{
private:
    int x;
    public:
    vishu  setd()
    {
        cout<<"enter any number which you have to insert"<<endl;
        int g;
        cin>>g;
        x=g;
        return *this ;

    }
    void show()
    {

        cout<<"yours values are following as"<<endl<<"x="<<x<<endl;
    }


};
int main()
{

    vishu x1;
    x1.setd();
    x1.show();
    return 0;
}
