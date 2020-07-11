#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void process(int n,int burst[],int pr[])
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(pr[i]<pr[j])
            {

                swap(pr[i],pr[j]);
                swap(burst[i],burst[j]);
            }
        }
    }
    int id=1,time=0;;
    for(int i=0;i<n;i++)
    {
        cout<<id<<"\t\t";
        id++;
        cout<<pr[i]<<"\t\t";
        int wait =time;
        cout<<wait<<"\t\t";
        time= time+burst[i];
        cout<<burst[i]+wait<<"\t\t"<<endl;
    }

}
int main()
{
    cout<<"Enter processes:"<<endl;
    int siz;
    cin>>siz;
    int burst[siz],pr[siz];
    cout<<"Enter burst time of "<<siz<<" processes"<<endl;
    for(int i=0;i<siz;i++)
        cin>>burst[i];
    cout<<"Enter priority no.(higher number has higher priority) of "<<siz<<" processes"<<endl;
    for(int i=0;i<siz;i++)
        cin>>pr[i];
    cout<<"Result is following as:"<<endl;
    cout<<"Process ID\tPriority\tWaiting Time\tTurn around time"<<endl;
    process(siz,burst,pr);
    return 0;

}
