#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("raju");
    ofstream fout;
    fout.open("kaju");
    char c;
    while(fin)
    {
        c=fin.get();
        cout<<c;
      fout.put(c);
    }
    return 0;
}
