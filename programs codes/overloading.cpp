#include<iostream>
using namespace std;
class complex
{
  private:
           int x,y;
    public:
        void setd(int a,int b)
        {

            x=a;
            y=b;
        }
        friend ostream & operator <<(ostream & fout,complex c)
        {
            fout<<c.x<<"+i"<<c.y<<endl;
            return (fout);
        }
        friend istream & operator >>(istream & fin,complex & c)
        {

            fin>>c.x>>c.y;
            return (fin);
        }
};
int main()
{

    complex c1;
cin>>c1;
    cout<<c1;

}
