#include<iostream>
using namespace std;
int fun(int x)
{
    int count=0;
    while(x!=0)
    {
        x/=10;
        count++;


    }
    return count;
}
int main()
{
    int h=fun(3456566);
    cout<<h;
}
