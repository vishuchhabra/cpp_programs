//simple program baesd on the pointer i the class which is helpful in using program

#include<iostream>
using namespace std;
class box
{
private:
    int x,y,z;
public:
    void setd(int a,int b,int c)
    {

        x=a;
        y=b;
        z=c;

    }
    void show()
    {

        cout<<"values of your number is following as "<<endl<<x<<endl<<y<<endl<<z;
    }
};
int main()
{
   box vishu,*chhabra;
   chhabra=&vishu;//at here we have assign the address of the vishu object to the object ponter ie chhabra
   cout<<"enter the three numbers"<<endl;
   int df,gh,fh;
   cin>>df>>gh>>fh;
   chhabra->setd(df,gh,fh);
   chhabra->show();
   return 0;


}

