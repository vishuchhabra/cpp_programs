#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
int main()
{
ifstream fin;
char d;
fin.open("kaju");
while(fin)
{
    d=fin.get();
    cout<<d;
}
}
