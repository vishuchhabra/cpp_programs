#include<iostream>
using namespace std;
int main()
{

    string n;
    cin>>n;
    int p =n[0]-'0';
    int q = n[1]-'0';
    int l= (p*10)+ q;

     l+=12;
     //cout<<l;
     if(n[8]=='A')
        for(int g=0;g<=7;g++)

            {
              cout<<n[g];

            }

     if(n[8]=='P')
     {
         cout<<l;
         for(int h=2;h<=7;h++)
         {

            cout<< n[h];
         }


}}
