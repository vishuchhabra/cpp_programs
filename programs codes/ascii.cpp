#include<iostream>
using namespace std;
int main()
{

    string a;
    cin>>a;
    int cont=0;
    for(int p=0;p!=100;p++)
    {
        if(a[p]=='\0')
            break;
        int m=a[p];
        cout<<m<<endl;;
        cont++;


    }
    cout<<endl<<endl<<cont;
}
