#include<iostream>
using namespace std;
class reetu;
class vishu
{
public:
    void setd(reetu );
};

class reetu
{
    int val;
public:
   // friend class vishu;
   friend void vishu::setd(reetu);
};
void vishu::setd(reetu s)
{
    s.val=10;
    cout<<s.val;
}
int main()
{
    vishu h;
    reetu y;
    h.setd(y);
    return 0;
}
