//important program based on operator overloading of insertion and extraction
#include<iostream>
using namespace std;
class complex
{

private:
    int x,y;
public:
    void getd(int a,int b)
    {

        x=a;
        y=b;
    }
    friend ostream & operator <<(ostream &,complex );
    friend istream & operator >>(istream &,complex&);
};
ostream & operator << (ostream & dout,complex p)
{

    dout<<"value id following as "<<p.x<<"+i"<<p.y<<endl;

    return (dout);
}
istream & operator >>(istream &fin ,complex &f)//without taking reference it will not transfer the value of x and y of t to f
//there fore we also take reference at here and by taking reference we became eligible to transfer the value of the nu
{
    fin>>f.x>>f.y;
    return (fin);

}
int main()
{

    complex f,t;
  //  f.getd(34,6);
    cin>>t;
    //another way to write this one//operator <<(cout,f);
    //operator <<(cout,t);
    cout<<t;
    return 0;
}
