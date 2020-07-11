#include<iostream>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{   
    set <int ,greater<int>> h;
    int n;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        h.insert(n);
    }

    set<int , greater<int>>:: iterator r;
   for( r =h.begin();r!=h.end();r++)
    {
        cout<<*r<<"  ";
    }
    cout<<endl;

    // cout<<"check: "<<h.count(22)<<endl;
    // cout<<*max_element(h.begin(),h.end())<<endl<<*min_element(h.begin(),h.end())<<endl;

    h.erase(h.find(45));

     for( r =h.begin();r!=h.end();r++)
    {
        cout<<*r<<"  ";
    }
    




    return 0;
}