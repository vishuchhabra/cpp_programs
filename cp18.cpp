//stack program in stl 
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<numeric>
#include<stack>
using  namespace std;

void showstack(stack <int> x)
{
    while(!x.empty())
    {
        cout<<x.top()<<" ";
        x.pop();
    }
}
int main()
{
    stack <int> x;
    cout<<x.empty()<<endl;
    int val;
    for(int i=0;i<5;i++)
    {
     cin>>val;
    x.push(val); 
    }

    showstack(x);

    cout<<"size of stack is: "<<x.size()<<endl;

    cout<<"pop elements are following as"<<endl;
    for(int i=0;i<5;i++)
    {

    cout<<x.top()<<" ";
    x.pop();
    }
    cout<<endl;

    return 0;
}