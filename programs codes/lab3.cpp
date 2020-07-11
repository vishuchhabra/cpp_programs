#include<iostream>
using namespace std;
class str

{
    private:
            char  *p;
            int siz;
    public:
        void str()
        {

            cout<<"enter the value of size of string "<<endl;
            cin>>siz;
            p=new char [siz];

        }
        ~str()
        {

            delete []p;
            cout<<"memory have released "<<endl;
        }
        void input()
        {

            cout<<"enter the string
        }



};
