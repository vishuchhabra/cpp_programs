#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;
int  main()
{

    cout<<"ENTER YOUR NAME "<<endl;
    char c[20];
    gets(c);
    int u=strcmp(c,"reetu");
    if(u==0)
    {

        cout<<"this girl is janwar";
    }
    else
        cout<<"he is very noble person"<<endl;
    return 0;
}
