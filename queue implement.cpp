#include<iostream>
#include<stdlib.h>
using namespace std;
class queu
{
private:
    int fron=-1,rear=-1;
    int *arr;
    int capacity;
public:
    int check(queu *point,int n)
    {
        for(int i=0;i<point->capacity;i++)
        {
            if(n==point->arr[i])
            return 1;
        }
        return 0;
    }

    queu* create(int cap)
    {

        queu *point;
        point=new queu;
        point->capacity=cap;
        point->arr=new int[cap];
        return point;
    }
    int isempty(queu *point)
    {

        if(point->rear==-1)
            return 1;
        else
            return 0;
    }
    int isfull(queu *point)
    {

        if((point->rear+1)%point->capacity==point->fron)
            return 1;
        else
            return 0;
    }
    void  insertion(queu* point)
    {
       if(isfull(point)==1)
       {
            cout<<"\ncan't more process\n"<<endl;
            
       }
       else
       {
           if(point->rear==-1&&point->fron ==-1)
           {

            int item;
       cout<<"process:"<<endl;
       cin>>item;
       point->rear=0;
       point->fron=0;
       point->arr[point->rear]=item;


           }
           else
           {


        
       int item;
       cout<<"process:"<<endl;
       cin>>item;
       if(check(point,item))
       cout<<endl<<"\nalready present\n"<<endl<<endl;
       else
       {
           point->rear=(point->rear+1)%point->capacity;
           point->arr[point->rear]=item;
       }
        
       
       
        }

       }
    }
    void deletion(queu  *point)
    {

        if(isempty(point)==1)
        {
         cout<<"\nno process remain\n"<<endl;
         
        }
        else
        {

            if(point->rear==point->fron)
            {
                cout<<"processing service:"<<endl<<point->arr[point->fron]<<endl;
                rear=fron=-1;
                
            }
            else
                {
                    cout<<"processing service"<<endl<<point->arr[point->fron]<<endl;

                    point->fron=(point->fron +1)%point->capacity;
                    
            }

        }
    }


};

int main()
{
int n;
cout<<"enter how much processes system you want to use:"<<endl;
cin>>n;


    queu *start;
    start=new queu;

    start=start->create(n);


    while(1)
    {
        cout<<"\n\n1.enter proccess\n2.servies process\n3.shut down\n\n"<<endl;
    int u;
    cin>>u;
        switch (u)
            {
            case 1:
         start->insertion(start);
          break;
            case 2:
                start->deletion(start);
                break;
            case 3:
                exit(0);
            default:
                cout<<"please enter the valid identity"<<endl;
                
            }

            
    }
    return 0;


}
