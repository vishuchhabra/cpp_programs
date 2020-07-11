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
    int arrival;
    node  *next=NULL;



node* create(int n)
{
    node *p =new node;
    p->data =n;
    cout<<"Enter burst:";
    int time;
    cin>>time;
    cout<<"Arrival:";
    int ave;
    cin>>ave;
    cout<<"\n\n";
    p->burst= time;
    p->arrival=ave;
    return p;
}




void push()
{

    cout<<"process: ";
    int n;
    cin>>n;
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
void pop(int *time ,float *aw,float *att)
{


    if(!start)
    cout<<"\nNo processsing\n"<<endl;
    else
    {
        if(start->next!=NULL)
        {
        cout<<"processsed service:";
        cout<<start->data;
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
          cout<<start->data;
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
