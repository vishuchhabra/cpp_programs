#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("my file");
    fout<<"my name is khan"<<endl;
    fout.close();
    return 0;


}
