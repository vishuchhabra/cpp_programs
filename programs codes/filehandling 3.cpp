#include<iostream>
#include<fstream>

using namespace std;
int main()
{

    ofstream fout;
    fout.open("bala");
    fout<<"vinayak is my best friend "<<endl<<"i am also his best friend"<<endl;
    fout.close();
    return 0;
}
