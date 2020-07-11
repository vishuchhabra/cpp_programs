#include<iostream>
using namespace std;
int main()
{

    int *p;
    p=new int[2];
    p[0]=67;
    p[1]=89;
    cout<<"values are following as"<<endl<<p[0]<<endl<<p[1]<<endl;
    delete []p;//when judu tak object ha tab tak memory delete nhi hundi object ha tab tak chaldi rhi ge memory
    p[1]=64;//no effect of delete on object because object is present now
    cout<<p[1]<<endl;
    p[0]=56;
    cout<<p[0]<<endl;
    return 0;
}
