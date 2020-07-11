#include<iostream>
#include<stdlib.h>
using namespace std;
class stac
{

public:
    int top= -1;
    int cap;
    int *arr;
stac* create(int n)
{
    stac *p ;
    p= new stac;
    p->cap = n;
    p->arr = new int[n];
    return p;
}

int isfull()
{

    if(top ==cap-1)
        return 1;
        return 0;
}
int isempty()
{

    if(top ==-1)
        return 1;
    return 0;
}
void push()
{

    if(isfull())
    cout<<"Overflow"<<endl;
    else
    {

        int n;
        cout<<"Element:";
        cin>>n;
        top ++;
        arr[top]=n;
    }
}
void pop()
{
    if(isempty())
    cout<<"NO element";
    else
    {

        cout<<"element:"<<arr[top]<<endl;
        top --;
    }

}
};
int main()
{

    int s;
    cout<<"Enter size:";
    cin>>s;
    stac *p;
    p= p->create(s);
    while(1)
    {

        cout<<"1.push\n2.pop"<<endl;
        int t;
        cin>>t;
        switch(t)
        {

        case 1:
            p->push();
            system("pause");
            system("cls");

            break;
             case 2:
            p->pop();
            system("pause");
            system("cls");

            break;

        }
    }
}
