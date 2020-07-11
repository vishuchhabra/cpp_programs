#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int k;
    string n;
    cin>>k>>n;
    vector<int>t;
    int coun=0;
    int y;
    for(int i=0;i<n.length();i++)
    {
         y =(int)n[i]-'0';

        t.push_back(y);

    }
    sort(t.begin(),t.end());
    int sum=accumulate(t.begin(),t.end(),0);
    if(sum>=k)
    {

        cout<<"0"<<endl;

    }else


       {
           int temp;
        int u=0;
        for(int p=0;p<t.size();p++)
        {
            temp =t[p];
            t[p]=9;
            sum=sum+9-temp;
            coun++;
            if(sum>=k)
            {
                cout<<coun<<endl;
                break;

            }



        }
    }
}
