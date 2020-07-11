#include<iostream>
#include<stdlib.h>
using namespace std;

class queu
{
    public:
      int f=-1,r=-1,c,*arr;

    void create(int n)
    {
      c=n;
      arr=new int[n];

    }

    int isfull()
    {
      if((r+1)%c==f)
      return 1;
      return  0;
    }
    int isempty()
    {
      if(r==-1 && f==-1)
      return 1;
      return 0;
    }
    void push()
    {
      if(!isfull())
      {
        int n;
        cout<<"Enter element"<<endl;
        cin>>n;
        if(r==-1 && f==-1)
        {
          r=0;f=0;
          arr[r]=n;

        }
        else
        {
           r=(r+1)%c;
           arr[r]=n;
        }


      }
      else
      cout<<"Overflow"<<endl;
    }
    void pop()
    {

      if(!isempty())
      {
      if(f==r)
      {
        cout<<"element:"<<arr[r]<<endl;
        r=-1;
        f=-1;
      }
      else
      {
        cout<<"element:"<<arr[f]<<endl;
         f=(f+1)%c;

      }
      }
      else
      cout<<"no element"<<endl;
    }

};

int main()
{

  queu start;
  int siz;
  cout<<"siz:";
  cin>>siz;

  start.create(siz);

    while(1)
    {
        cout<<"\n\n1.push\n2.pop\n3.shut down\n\n"<<endl;
    int u;
    cin>>u;
        switch (u)
            {
            case 1:
                start.push();
                break;
            case 2:
                start.pop();
                break;
            case 3:
                exit(0);
            default:
                cout<<"please enter the valid identity"<<endl;

            }


    }

}
