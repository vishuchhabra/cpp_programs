#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {

        int n;
        cin>>n;
        vector<int>temp(n);
        for(int i=0;i<n;i++)
            cin>>temp[i];
        int sum= accumulate(temp.begin(),temp.end(),0);
        int coun_zero = count(temp.begin(),temp.end(),0);

        if(sum==0 && coun_zero==0)
            cout<<"1"<<endl;
        else if (sum && !coun_zero)
            cout<<"0"<<endl;
        else
        {
            sum= sum +coun_zero ;
            if(sum)
                cout<<coun_zero<<endl;
            else
                cout<<coun_zero +1<<endl;
        }
        temp.clear();


    }
    return 0;
}
