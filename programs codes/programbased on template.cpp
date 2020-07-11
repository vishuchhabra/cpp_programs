//important program based on templete command
#include<iostream>
using namespace std;
template <class x,class y>
y great(x r,y s)//at here return type should be x or y //
{
    if (r>s)
        return r;
    else
        return s;
}
int main()

{
    cout<<"values are following as "<<endl<<great(458,56.6)<<endl;
    return 0;
}

