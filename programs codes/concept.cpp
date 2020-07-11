//important concept related to the new keyword
#include<iostream>
using namespace std;
int main()
{

    int *t;
    t=new int ;
    *t=45;
    cout<<*t<<endl;
    return 0;
}
