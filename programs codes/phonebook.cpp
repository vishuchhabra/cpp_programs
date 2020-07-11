#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<cstdio>
using namespace std;
int main()
{
    while(1)
    {
    char f[20]={"vishu chhabra"};
    char d[20];
    cout<<"ENTER THE USER PASSWORD "<<endl;
    gets(d);
    system("cls");
    int y=strcmp(d,f);
    if(y==0)
    {

        cout<<"PASSSWORD IS CORRECT PRESS ENTER TO OPEN PHONE BOOK"<<endl;
        system("pause");
        system("cls");
        cout<<"FEATURES:"<<endl;
        cout<<"1:list of all the contacts "<<endl<<"2:save new number in the phonebook"<<endl<<"3:for searching any contacts from whole phonebook"<<endl;
        cout<<"FOR QUIT PRESS 0"<<endl;
        int r;
        cin>>r;
        if(r==0)
        {
            exit(0);
        }
    }

    else
    {

        cout<<"password is incorrect"<<endl<<"TRY AGAIN"<<endl;
    }
    system("pause");
    system("cls");
    }
    return 0;
}
