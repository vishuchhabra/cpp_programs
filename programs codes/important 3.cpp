#include<iostream>
#include<cstdio>
#include<stdio.h>

using namespace std;
int  main()
{
    char d[20];
    cin>>d;//same as by getline same by gets same by get etc;//same by cin because d will represent first adress of array
    cout<<&d[0];//it will print whole as scanned by getline
    return 0;//here &d[0] and d is same
}
