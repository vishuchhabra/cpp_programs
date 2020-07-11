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
    int burst;
    int arrival=0;
    int pr;
    node  *next=NULL;


public:
 node* create(int n)
 {
    node *p =new node;
    p->data =n;
    cout<<"Enter burst:";
    int time;
    cin>>time;
    cout<<"priority:";
    int ave;
    cin>>ave;
    cout<<"\n\n";
    p->burst= time;
    p->pr=ave;
    return p;
 }

void push()
  {

    cout<<"process: ";
    int n;
    cin>>n;
    node *p = create(n);
    if(start==NULL || start->pr < p->pr)
    {
        p->next= start;
        start = p;
    }
    else
    {

        node *t;
        t=start;
        while(t->next!=NULL && start->next->pr > p->pr)
            t= t->next;
        p->next= t->next;
        t->next= p;
    }

  }

void pop(int *time ,float *aw,float *att)
{


    if(!start)
    cout<<"\nNo processsing\n"<<endl;
    else
    {
        if(start->next!=NULL)
        {
        cout<<"processsed service:";
        cout<<start->data<<" priority: ("<<start->pr<<")";
        int y=(*time)-(start->arrival);
        if(y<0)
            y=0;
        (*aw)=(*aw)+y;
        cout<<"  waiting time: "<<y;
        (*time)=(*time)+( start->burst) ;
        (*att)= (*att)+y+(start->burst);
        cout<<"  turnaround time:"<<y+(start->burst)<<endl;
        start=start->next;
        }
        else
        {
         cout<<"processsed service:";
         cout<<start->data<<" priority: ("<<start->pr<<")";
         int y=(*time)-(start->arrival);
         if(y<0)
         y=0;
         (*aw)=(*aw)+y;
         cout<<"  waiting time: "<<y;
         (*time)=(*time)+( start->burst) ;
         (*att)= (*att)+y+(start->burst);
         cout<<"  turnaround time:"<<y+(start->burst)<<endl;
         start=NULL;
        }
    }
}
};

int main()
{
    cout<<"Important : Higher number has higher priority (1 has higher priority than 0)."<<endl;
        float c=0,aw=0,att=0;
        int time =0;
        node p;
        int s;
        int coun ;
        cout<<"How much process"<<endl;
        cin>>coun;
        int fo=coun;
        int ave=coun;
        cout<<"\n\nenter "<<coun<<" process"<<endl;

        while(coun)
        {

          p.push();
          coun--;
        }


        cout<<"\n\nTime detail is :"<<endl;
        while(fo)
        {
          p.pop(&time,&aw,&att);
          fo--;
        }
        cout<<"\nAverage Waiting time :"<<aw/ave;
        cout<<"\nAverage turn around time: "<<att/ave<<endl;
    return 0;
}
