#include<iostream>//private function is not affected by public and private concept becaues it is not a member function
using namespace std;
class reetu;//declaratioon is compulsory due to fact that compiler dont know who is reetu without declaration
class vishu
{
private:
    int a;
    public:
    void setd1(int x)
    {
        a=x;
    }
    private://to check rsult for friend function we just write the private otherwise we can write public also
    friend void sum(vishu,reetu);
};
class reetu
{
private:
    int b;
    public:
    void setd2(int y)
    {
        b=y;
    }
    private:
    friend void sum(vishu,reetu);
};
void sum(vishu t,reetu h)
{

    cout<<"sum of the numbers is follwing as"<<endl<<t.a+h.b<<endl;

}
int main()
{

    vishu u;
    reetu v;
    u.setd1(3);
    v.setd2(5);
    sum(u,v);

    return 0;
}
