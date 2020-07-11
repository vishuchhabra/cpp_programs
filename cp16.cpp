//objective of  this code to learn all the containers in the stl
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<numeric>
#include<vector>
#include<iterator>
using namespace  std;
int main()
{
    // vector <int> v;
    // int n;
    // //first method to insert the element 
    // for(int i=0;i<5;i++)
    // {
    //     cin>>n;
    //      v.insert(v.begin()+i, n);
         
    // }


    //second method of insertion in vector 

    // for(int i=0;i<5;i++)
    // {
    //     cin>>n;
    //     v.push_back(n);
    // }


    // //to print the no. of elements in the array
    // cout<<v.size()<<endl;


    //printing the vector  in the reverse size

    // for(auto i = v.rbegin();i!=v.rend();i++)
    // cout<<*i<<"  ";

    //sorting the elements of the vector by following method

    // sort(v.rbegin(),v.rend(),greater<int>());
    // //sorting in reverse order
    // for(int i=0 ;i<5;i++)
    // cout<<v[i]<< "  ";


    // cout<<"printing by first method"<<endl; 
    // for(auto i=v.begin();i!=v.end();i++)
    // cout<<*i<<"  ";
    // cout<<"printing by second method"<<endl;
    // for(int i=0;i<5;i++)
    // cout<<v[i]<<" ";


    //print the size of vacant vector
    //  vector <int> x ;
    //  int n;
    //  for(int i=0;i<5;i++)
    //  {
    //    cin>>n;
    // //  x.push_back(n);
    //   x.insert(x.begin()+i ,n);

    //  }
    // //  for(int i=0;i<5;i++)
    //  cout<<x[i]<<" ";
    //  cout<<accumulate(x.begin(),x.end(),0)<<endl;

    // cout<<find(x.begin(),x.end(),23)-x.begin()<<endl;
    
    //cout<<lower_bound(x.begin(),x.end(),23)-x.begin()<<endl;
    
    // cout<<count(x.begin(),x.end(),34)<<endl;

    // vector <int> y =x;

    
     
    //assign function in stl
 
    // x.assign(5,100);

    //x.clear();

    // cout<<"printing is following as"<<endl;
    // for(int i=0;i<x.size();i++)
    // cout<<x.empty()<<endl;

    // vector <int> x ;

    // vector <int> :: iterator i;
    // int y;
    // for(int i=0;i<5;i++)
    // {
    //     cin>>y;
    //     x.push_back(y);
    // }

    // for(i= x.begin();i!=x.end();i++)
    
    // cout<<*i<< " "; 



     return 0;
}