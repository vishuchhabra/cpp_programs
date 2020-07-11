#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{

 //ofstream fout;
   //fout.open("hen");
    //fout<<"i am vishu chhabra and am from abohar"<<endl;
    //fout.close();
  //  return 0;
    ifstream fin;
    char c;
    fin.open("hen");
    float t;
    //char c;
    t=fin.tellg();
    cout<<t;
    fin>>c;
      t=fin.tellg();
    cout<<t;
   // while(fin)
    //{c=fin.get();
      //  t=fin.tellg();
        //cout<<t;
    //}
 fin>>c;
      t=fin.tellg();
    cout<<t;

}

