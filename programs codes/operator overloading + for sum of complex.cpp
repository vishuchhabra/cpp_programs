//program based on operator overloading in which we will learn two different method of finding sum just representation method
//is diifrent but work is same
#include<iostream>
using namespace std;
class complex
{
int a,b;
public:
void setdata(int x,int y)
{
a=x;
b=y;
}
void showdata()
{
cout<<endl<<a<<"+i"<<b<<endl;
}
complex operator +(complex c)
{
complex temp;
temp.a=a+c.a;
temp.b=b+c.b;
return (temp);
}

complex operator -(complex c)
{
complex temp;
temp.a=a-c.a;
temp.b=b-c.b;
return (temp);
}
void operator ==(complex d2)
{
    if (a==d2.a&b==d2.b)
    {
        cout<<"objects are equal"<<endl;


    }
    else{
        cout<<"objects are not equal"<<endl;
}}
};
int  main()
{

    complex c1,c2,c3,c4,c5;
    c1.setdata(3,6);
    c2.setdata(13,6);
    c3=c1.operator +(c2);//one method to write
    //c3.showdata();
    c4=c1+c2;//second method to write for sum
    c5=c1-c2;
    cout<<"sum is following as "<<endl;
    c4.showdata();
    cout<<"substraction is following as"<<endl;
    c5.showdata();
    c1==c2;//c1.operator ==(c2);//c1==c2;
    return 0;
}


