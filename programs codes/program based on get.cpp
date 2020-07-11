//scanning the string  using get function
#include<iostream>
using namespace std;
int main()
{
    cout<<"enter ant string which you have to insert"<<endl;
    char r[20];
    cin.get(r,5);
    cout<<"your string is following as "<<endl;
    cout<<r<<endl;
    for(int y=0;y<5;y++)
    {
        cout<<r[y];
    }
    cout<<endl<<r[4];
    return 0;


}
