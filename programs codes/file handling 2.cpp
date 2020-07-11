#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{

   /* ofstream fout;
    fout.open("country");
    fout<<"india is my country"<<endl;
    fout.close();
    fout.open("capital");
    fout<<" delhi is our capital"<<endl;
    fout.close();
    return 0;*///now we have a;ready created the file so there in no any need of it
    ifstream fin;
    fin.open ("country");
  /*  char c;
    while(fin)//its mean fin will give value of 0 when it will reach to end of file
    {
    c=fin.get();
    cout<<c;//one way to read the file
    }
    fin.close();*/
    char ch[80];
  //  while(!fin.eof())//also we can use eof at here
   // {

     /*   fin.getline(ch,80);//at here we can also use get function at here
        for(int y=0;y<20;y++)
        {

        cout<<ch[y];//also important about getline
        }
  //  }*/
  while(fin)//without ile it is also in working condition
{
      fin.getline(ch,80);//if we dont use while the it will read only one line other not because getline is used for read only one line
      cout<<ch;//benefit to write in the file is that it will write wholecollective
  }
    fin.close();
    return 0;
}
