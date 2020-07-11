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
        cout<<"dynamic memory have been created"<<endl;
    }
    ~myarray()
    {
        delete []arr;
        cout<<endl<<"dynamic memory has released"<<endl;
    }
    void input()
    {
        cout<<"enter the"<<" "<<size<<"  numbers which you have to insert"<<endl;
        for(int y=0;y<size;y++)
        {
            cin>>arr[y];

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
    if(re==1)
        cout<<"number is present "<<endl;
    else
        cout<<"number is not present "<<endl;
    return 0;
    }
