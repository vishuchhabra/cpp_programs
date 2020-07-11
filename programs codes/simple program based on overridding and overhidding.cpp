#include<iostream>
using namespace std;
class car
{
public:
    void setd()
    {

        cout<<"your name is vishu chhabra"<<endl;
    }
    void getd(int x)
    {
        //x=x;

        cout<<"your value is following as "<<endl<<"x="<<x<<endl;
    }
};
class supercar:public car
{

public:


        void setd()//this is known as method of overriding
        {

            cout<<"your name is khan if you dont want"<<endl;
        }
        void getd()
        {

            cout<<"this is function of child class "<<endl;
        }
    };
int main()
{
    supercar d;
    car r;
    d.setd();
    r.setd();//this is known as method of overriding
    int rr;
//this is error    d.getd(56.9);
r.getd(45);
d.getd();
    return 0;


}
