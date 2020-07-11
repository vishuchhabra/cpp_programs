#include<iostream>
using namespace std;
class number
{
    int l,b,h;
public:
    void setd(int l,int b,int h)
    {

      this->  l=l;
      this->  b=b;//use of this pointer to solve the problem in case of resolving the variable


      this->  h=h;

    }
    void show()
    {
        cout<<"values are following as "<<endl<<l<<endl<<b<<endl<<h<<endl;
    }
};
int main()
{

    cout<<"enter the three numbers "<<endl;
    int r ,t,u;
    cin>>r>>t>>u;
number g;
g.setd(r,t,u);
g.show();
return 0;
}
