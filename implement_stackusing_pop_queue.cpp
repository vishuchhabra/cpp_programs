#include<iostream>
#include<queue>
using namespace std;
class queu
{
public:
    queue <int> q1,q2;

    void push1(int x)
    {

        q1.push(x);

    }
    void pop1()
    {
        if(!q1.size())
        {
            cout<<"no element"<<endl;
            return;
        }


        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        cout<<"element: "<<q1.front()<<endl;
        q1.pop();

        queue <int> q;
        q=q1;
        q1=q2;
        q2=q;
    }

};
int main()
{
    queu t;
    cout<<"1.push\n2.pop"<<endl;
    while(1)
    {

        int n;
        cin>>n;
        switch(n)
        {

        case 1:
            int ele;
            cout<<"element:";
            cin>>ele;
            t.push1(ele);
            break;
        case 2:
            t.pop1();
            break;
        }
    }
    return 0;


}
