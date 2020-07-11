//example of general class using template
#include<iostream>

using namespace std;
template <class x>

class sum
{
private:
     x i;
     x j;
public:
    x add(x a,x b)
    {

        cout<<"sum is following as "<<endl;
        return (a+b);

    }

};

int main()
{
    cout<<"enter the two number whose sum you have to find"<<endl;
   float  s,f;
    cin>>s>>f;
    sum <float > d;
    cout<<d.add(s,f);
    return 0;

}
