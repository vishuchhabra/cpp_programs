//concatenation using operator overloading
#include<iostream>
#include<cstdio>//also we can write stdio.h

using namespace std;
class sum
{
private:
    char a[20];
public:
    void setd()
    {

       gets(a);

    }
    void operator +(sum x)

    {
        cout<<"after concatenation your string is following as "<<endl<<a<<x.a<<endl;


    }
};
int main()
{

    cout<<"enter your first string "<<endl;
    sum g,f;
    g.setd();
    cout<<"enter your second string "<<endl;
    f.setd();
   // g.operator +(f);
    g+f;
    return 0;
}


