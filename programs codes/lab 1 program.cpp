#include<iostream>
#include<string.h>
using namespace std;
class myarray
{   int *arr;
    int size;

    public:
    myarray()
    {
        cout<<"enter the value of size which you have to select"<<endl;
        cin>>size;
        arr =new int[size];
    }
    ~myarray()
    {
        delete []arr;
        cout<<endl<<"memory has released"<<endl;
    }
    void input()
    {
        cout<<"enter the"<<" "<<size<<"  numbers which you have to insert"<<endl;
        for(int y=0;y<size;y++)
        {
            cin>>*(&arr[0]+y);

        }
    }
    void display()
    {
        cout<<"your entered number are following as "<<endl;
        for(int r=0;r<size;r++)
        {
            cout<<arr[r]<<endl;
        }
    }
    int searching(int k)
    {
        int gh=0;
        for(int t=0;t<size;t++)
        {
            if(k==arr[t])

           {

            gh=4;
            break;
           }

            else
                gh=5;}
if(gh==4)
    return 1;
if(gh==5)
    return -1;
        }
void odd()
{
    for(int yu=0;yu<size;yu++)
    {
        if(arr[yu]%2!=0)
        {
            cout<<arr[yu]<<endl;
        }
    }
}
void even()
{
    for(int yu=0;yu<size;yu++)
    {
        if(arr[yu]%2==0)
        {
            cout<<arr[yu]<<endl;
        }
    }
}

void sort()
{
      for(int y=0;y<size-1;y++)
    {
        for(int u=0;u<size;u++)
            if(arr[u]>arr[u+1])
        {

            int g;
            g=arr[u];
            arr[u]=arr[u+1];
            arr[u+1]=g;
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;

    }

}
float  average()
{
    int sum=0;
    for(int n=0;n<size;n++)
    {
        sum=sum+arr[n];

    }
    float se=sum;
    float  a=se/size;
    return a;
}
void werinput()
{
    cout<<endl<<"how much strings you have to enter "<<endl;
int d;

    cin>>d;
    char a[d][100];
    cout<<"enter your strings "<<endl;
    for(int h=0;h<d;h++)
    {
        cin.get(a[h],100);

    }
    cout<<"your entered strings are following as "<<endl;
    for(int y=0;y<d;y++)
    {
        cout<<a[y]<<endl;
    }
        cout<<"enter the string which you have to search"<<endl;
        char ab[100];
        cin>>ab;
        int sd=0,yer=0;
        for(int y=0;y<d;y++){
       int  f=strcmp(ab,a[y]);
        if(f==0)
        {
             sd=7;
        }
else{ yer=6;}
        }

if(sd==7)
{
    cout<<"string is present "<<endl;
}
if(sd!=7&yer==6)
{
    cout<<"string is not present "<<endl;
}
}
};
int main()
{
    myarray f;
    f.input();
    f.display();
    cout<<"enter any number which you have to search"<<endl;
    int yu;
    cin>>yu;
    cout<<"result of your searching number is following as "<<endl;

    int re=f.searching(yu);
    cout<<re<<endl;
    cout<<"odd elements are the following as "<<endl;
    f.odd();
    cout<<"even numbers are following as "<<endl;
    f.even();
    cout<<"sort of your numbers(ascending order) is following as "<<endl;
    f.sort();
    cout<<"average of your given numbers are following as "<<endl;
    float m=f.average();
    cout<<m;
    f.werinput();
    return 0;

}
