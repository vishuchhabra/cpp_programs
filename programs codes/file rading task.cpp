#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    ifstream fin;
    fin.open("my file");
    char ch;
  ch=  fin.get();//at here we can also use getline function char ch[56];   fin.getline (ch,40);
  //do not store space//  fin>>ch;
    while(!fin.eof())
    {

        cout<<ch;
       //do not store space // fin>>ch;
      ch= fin.get();//but it will store space
    }
    fin.close ();
return 0;
}
