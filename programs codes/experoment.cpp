//overloading of insertion and extraction operator with using friend function
#include<iostream>
using namespace std;
class complex
{

    int a,b;
public:

 friend    ostream &  operator <<(ostream & fout,complex  c)//second use of friend keyword to make function without calling by object
    {
        fout<<c.a<<"+i"<<c.b;
return (fout);

    }
friend     istream & operator>>(istream & fin,complex &d)
    {

        fin>>d.a>>d.b;
        return (fin);
    }
};
int main()
{

    complex c1,c2;
    cout<<"enter the first complex number with its real and imaginary part"<<endl;
    cin>>c1;
      cout<<"enter the second complex number with its real and imaginary part"<<endl;
      cin>>c2;
      cout<<"both entered complex numbers are following as: "<<endl;
    cout<<c1<<endl<<c2;
    return 0;
}
