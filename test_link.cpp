#include<iostream>
#include<stdlib.h>
using namespace std;
class node;
node *start=NULL;
class node
{

public:
    int data;
    node *next;
    node* create(int n)
    {

        node * p = new node;
        p->next =NULL;
        p->data = n;
        return p;
    }
   /*void push(int n)
    {
       node *p =create(n);
        if(start==NULL || start->data>=p->data)
        {
            p->next = start;
            start =p;
        }
        else
        {
            node *t = start;
            while(t->next!=NULL && t->next->data<p->data)
            {
                t= t->next;
            }
            node  *y = t->next;
            t->next =p;
            p->next =y;
        }

    }  */
    void push(int n)
    {
        //insetting at front of link list
        node *p =create(n);
        p->next = start;
        start= p;

    }



    void print()
    {

        node *r= start;
        while(r)
        {
            cout<<r->data<<" ";
            r=r->next;

        }
    }
    //void delete1(int n)
    //{
      //  node *p= start;
        //while(p!=NULL)
        //{
          //  if(p->data ==n)
           // {

             //*p= *(p->next);
//              break;
  //          }
    //        p=p->next;
      //  }
    //}
   /* void delete1(int n)
    {

        if(start->data ==n)
            start =start->next;
        else
        {
            node *p= start;
            while(p->next)
            {
                  if(p->next->data ==n)
                  {
                    p->next = p->next->next;
                    break;
                  }
                p= p->next;
            }
        }
    } */

    void sort1()
    {

        node *p =start;
        while(p->next)
        {
            node *r = p->next;
            while(r)
            {

                if(r->data < p->data )
                {

                    int t = p->data;
                    p->data = r->data;
                    r->data = t;


                }
                r=r->next;
            }
            p = p->next;

        }

    }
};
int main()
{
    int n;
    node r;
    while(true)
    {
        cout<<"1.push\n2.print\n3.sort"<<endl;
        cin>>n;
        switch(n)
        {

        case 1:
            int u;
            cout<<"Element:";
            cin>>u;
            r.push(u);
            system("cls");
            break;
        case 2:
            r.print();
            system("pause");
            system("cls");
            break;
        case 3:
            r.sort1();
            system("pause");
            system("cls");
            break;
        }
    }
    return 0;
}
