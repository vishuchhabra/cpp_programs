//important program based on string data type
#include<iostream>
//#include<cstdio>
using namespace std;
int main()

{
    string v;//new keyword string whose memory will declared run time therefore no waste of memory at here
    cout<<"enter your string which you have to print"<<endl<<endl;
     getline (cin,v);//by experience only two syntax are in working position for this data type
    cout<<endl<<"your string is following as "<<endl<<endl<<v;
    return 0;

}
