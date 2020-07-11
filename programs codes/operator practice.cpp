#include<iostream>
using namespace std;
int main()
{

    cout<<"enter the any two numbers"<<endl;
    int x,y;
    cin>>x>>y;
    if(x==0&&y==0)
    {

        cout<<"this is case one"<<endl;
    }
    if(x==0||y==0)
    {
        cout<<"this is case two"<<endl;
    }
    return 0;
}
