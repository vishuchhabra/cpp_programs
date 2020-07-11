#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
class stac
{

public:
    stack <int> q1,q2;
void push1(int x)
{

    while(!q1.empty())
    {

        q2.push(q1.top());
        q1.pop();

    }
    q1.push(x);
    while(!q2.empty())
    {

        q1.push(q2.top());
        q2.pop();
    }
}
void pop1()
{

    if(q1.empty())
    {
        cout<<"No element"<<endl;
        return ;
    }
    cout<<"element:"<<q1.top()<<endl;
    q1.pop();

}
};
int main()
{
    stac t;
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


