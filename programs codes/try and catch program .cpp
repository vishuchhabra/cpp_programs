#include<iostream>
using namespace std;
int main()
{

    cout<<"enter the number whose factorial you have to find"<<endl;
    int y;
    char c;
    cin>>y;
    try
    {
        if(y==0)
        {
throw 5;
        }
        if(y<0)
        {

            throw c;
        }
        if (y>0)
        {
            int sum=1;
            for(int t=1;t<=y;t++)
            {
                sum=sum*t;
            }
            cout<<"factorial of "<<y<<" is "<<sum<<endl;
        }

    }
    catch(int)

    {

            cout<<"factorial of "<<y<<" is 1"<<endl;
    }
    catch(char)

    {
        cout<<"number is not valid "<<endl<<"also for negative number factorial is not countable"<<endl;
    }

    return 0;
}
