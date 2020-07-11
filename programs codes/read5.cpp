#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    ifstream fin;
    fin.open("hen");
    char c;
    int y;
    y=fin.tellg();
    cout<<y;
    fin>>c;
     y=fin.tellg();
    cout<<y;
    return 0;
}
