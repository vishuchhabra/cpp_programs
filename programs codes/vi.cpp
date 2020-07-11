#include<iostream>
using namespace std;
int main()
{
cout<<"enter the three numbers"<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b&&a>c)
        cout<<"maximum no. is"<<endl<<a;
    else if(b>a&&b>c)
        cout<<"maximum no. is  "<<endl<<b;
    else
        cout<<"maximum no. is "<<endl<<c;
    return 0;
}
