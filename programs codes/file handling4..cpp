#include<iostream>
#include<fstream>
#include<string.h>
#include<cstdio>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{

    ofstream fout;
    fout.open("raju");
    fout<<"i am vishu chhabra "<<endl<<"i am from aboahr"<<endl;
    fout.close();
    ifstream fin;
    fin.open("raju");
    char c[30];
    while(fin)
    {

        fin.getline(c,30);
        cout<<c;

    }

    fin.close();
    cout<<endl;
    fin.open("raju");
    char r;
    while(!fin.eof())
    {

      fin.get(r);//also write r= step
        cout<<r;
    }

fin.close();



    return 0;
}
