#include<iostream>
using namespace std;
class vishu
{

private:
    int x,y;
public:
    void setd()
    {
        cout<<"enter the two numbers "<<endl;
        int a,b;
        cin>>a>>b;
        x=a;
        y=b;
    }
    void print()
    {
        cout<<"yours values are following as "<<endl<<"x="<<x<<endl<<"y="<<y<<endl;
    }
};
class chhabra :public vishu
{

};
class vinny :public vishu
{

};
int main()
{

    vinny er;
    er.setd();
    er.print();
    chhabra gdd;
    gdd.setd();
    gdd.print();
    return 0;

}
