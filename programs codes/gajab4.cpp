#include<iostream>
using namespace std;
int p;
int *x=&p;
class hlo
{


public:
int vishu()
{
if(x==NULL)
    return 5;
    else
        return 789;

}
};
int main()
{

    hlo p;

    cout<<p.vishu();
}
