//reverse the string using the stack in c++
#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<algorithm>
#include<string>
using namespace std;

void showstack(stack <char> t)
{
    cout<<"reverse is : ";
    while(!t.empty())
    {
        cout<<t.top();
        t.pop();

    }
    while(!t.empty())
    {
        cout<<t.top();
        t.pop();

    }
 
    

    cout<<endl;
}

int main()
{
    stack <char> x;
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        x.push(str[i]);

    } 
    showstack(x);
    
    

    return 0;   
}

