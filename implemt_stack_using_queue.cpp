//this is push costly method
#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

class queu
{

public:
    queue <int> q1,q2;

    void push1(int x)
    {
        q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

    queue<int> q;
    //swapping the numbers
    q=q1;
    q1=q2;
    q2=q;
    }

    void pop1()
    {
        cout<<"element :"<<q1.front()<<endl;
        q1.pop();

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
