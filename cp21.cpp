//introductio to queue in stl
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<queue>
using namespace std;

void showQueue(queue <int > x)
{
    cout<<"size:"<<x.size()<<endl;
    cout<<"queue is :"<<endl;
    while(!x.empty())
    {
        cout<<x.front()<<" ";
        x.pop();
    }
    cout<<endl;
}
int main()
{
    queue <int> x;
     int n;
    for(int i=0;i<5;i++)
     {
       cin>>n;
       x.push(n);
     }
    showQueue(x);
    cout<<"pop elements in queue is:"<<endl;
    for(int i=0;i<5;i++)
    {
    cout<<x.front()<<endl;
    x.pop();
    }

return 0;
    
}
