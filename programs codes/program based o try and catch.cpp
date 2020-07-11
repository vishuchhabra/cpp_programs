#include<iostream>
#include<stdio.h>
using namespace std;
int main()

{
    printf("basically this is example of exception handling \n");
    cout<<"enter the two numbers"<<endl;
    int c,d;
    cin>>c>>d;
    float 1 x=c-d;
    try
    {
        if (x==0)
        {

            throw (3);

        }
        if(x!=0)
        {

            cout<<"values are following as "<<endl<<c/(c-d)<<endl;
        }

        }
        catch(int)
        {

            printf("we can't find its value because denominator became zero in this case\n");

        }
        return 0;
}
