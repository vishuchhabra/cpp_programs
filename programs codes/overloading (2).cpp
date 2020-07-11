#include<iostream>
using namespace std;
class comp
{

private:
    int x,y;
public:
    void getd(int a,int b)
    {

        x=a;
        y=b;
    }
    ostream& operator <<(ostream dout &,comp t)
    {

        cout<<t.a<<"=i"<<y.b<<endl;
        return (dout);
    }
};
int main()
{

    compl g;
    g.setd(3,5);
    cout<<g;
    return 0;
}
