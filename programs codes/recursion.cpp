#include<iostream>
using namespace std;
int even(int n)
{
    if(n>0)
    return ((2*n-1) +even(n-1));
    else
        return 0;
    }

int main()
{
    cout<<"enter how much first n even numbers whose sum you want to print"<<endl;
    int t;
    cin>>t;
   cout<< even(t);



}
