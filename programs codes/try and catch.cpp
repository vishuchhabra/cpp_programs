//important program based on try and catch which is called exception handling
#include<iostream>
using namespace std;
int main()
{

    int x;
    cout<<"enter the number whose factorial you have to find "<<endl;
    cin>>x;
     char c;
    try
    {

        if(x==0)
            throw 1;
        if(x<0)

            throw c;
        if (x>0)
        {
            int sum=1;
            for(int y=x;y>0;y--)
            {
                int r= y*1;
                sum =sum*r;


            }
            cout<<"factorial of your given number is following as"<<endl;
            cout<<sum;
        }
    }
    catch(int )
    {

        cout<<"factorial of your number  is following as "<<endl;
        cout<<"1"<<endl;

    }
    catch(char )
    {
        cout<<"for finding  factorial of any number that  should be in the range of [0,inf)"<<endl;
    }

    return 0;
}
