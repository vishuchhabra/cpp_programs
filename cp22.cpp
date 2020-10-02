//reverse a string using stack in c++
#include<bits/stdc++.h>
using namespace std;

void showstack(stack <char> t)
{
    cout<<"reverse is : ";
    while(!t.empty())
    {
        cout<<t.top();  //printing the top element of stack
        t.pop();
    }
    cout<<endl;
}

int main()
{
    stack <char> x;
    string str;
    getline(cin,str); //getting string from user
    for(int i=0;i<str.length();i++)   //entering string in stack
    {
        x.push(str[i]);
    } 
    showstack(x); //print stack function
    return 0;   
}

