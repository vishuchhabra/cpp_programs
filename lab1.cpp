#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

class node;

node *start= NULL;
class node
{
    public:
    int data;
    node  *next;


public:
node* create(int n)
{
    node *p =new node;
    p->data =n;
    return p;
}

int check(int n)
{
    node *p=start;
    while(p)
    {
        if(p->data ==n)
        return 1;
        p=p->next;


    }
    return 0;
}


void push()
{
    cout<<"process: ";
    int n;
    cin>>n;

    if(check(n))
    {
        cout<<"\n\nAlready present\n\n"<<endl;
    }
    else
    {
         node *p = create(n);


    if(!start)
    start = p;
    else
    {
        node *t=start;
        while(t->next!=NULL)
        t=t->next;
        t->next=p;
    }

    }




}
void pop()
{


    if(!start)
    cout<<"\nNo processsing\n"<<endl;
    else
    {
        if(start->next!=NULL)
        {
        cout<<"processsing service:";
        cout<<start->data<<endl;
        start=start->next;
        }
        else
        {
          cout<<"processsing service:";
          cout<<start->data<<endl;
          start=NULL;

        }
    }

}
};
int main()
{
    node p;
    int s;
    while(true)
    {
    cout<<"\n\n1.enter process  2.service process\n\n"<<endl;
    cin>>s;
    switch(s)
    {
        case 1:
        p.push();

        break;

        case 2:
        p.pop();

    }
    }

    return 0;
}
