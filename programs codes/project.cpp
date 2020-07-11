#include<iostream>
#include<fstream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class patient
{
private:
    int rid=0;int age;
    char bg[2];
    char name[15];
    char dob[8];
    char sex[1];
    char mob[10];
    char add[40];
    char rel[15];
    char die[20];
    int bill;
public:
    void adddata()
    {

        ofstream fout;
        fout.open("patent.txt",ios::app);
        cout<<"NEW RIGISTRATION FORM:-"<<endl<<endl;
        while(1){
        cout<<"REGISTRATION ID(SIX DIGITS):";

            cin>>rid;
            if(rid>99999&&rid<1000000)
            {
                break;
            }
            cout<<"INVLIAD ID !!!!!!! "<<endl;
        }
        fout<<"REGISTRATION ID:";fout<<rid<<endl;
        cin.ignore();
        cout<<"NAME:";fout<<"NAME:";
         gets(name);
        fout<<name<<endl;
        cout<<"DATE OF BIRTH(DDMMYYYY):";fout<<"DATE OF BIRTH(DDMMYYYY):";
        cin>>dob;
        fout<<dob<<endl;
        cout<<"MALE(M/F):";fout<<"MALE(M/F):";
        cin>>sex;
        fout<<sex<<endl;
        cout<<"AGE:";fout<<"AGE:";cin>>age;fout<<age<<endl;
        cout<<"BLOOD GROUP:";fout<<"BLOOD GROUP:";cin.ignore();gets(bg);fout<<bg<<endl;
cout<<"MOBILE NUMBER:";fout<<"MOBILE NUMBER:";cin>>mob;fout<<mob<<endl;
cout<<"ADDRESS:";fout<<"ADDRESS:";cin.ignore();gets(add);fout<<add<<endl;
cout<<"RELATIVE NAME:";fout<<"RELATIVE NAME:";gets(rel);fout<<rel<<endl;
cout<<"DISEASE:";fout<<"DISEASE:";gets(die);fout<<die<<endl;
cout<<"BILL AMOUNT:";fout<<"BILL AMOUNT:";cin>>bill;fout<<bill<<endl;
fout<<"***************************************************************"<<endl;
cout<<"ACCOUNT CREATED SUCCESSFULLY...........";
        fout.close();
    }
    void alldata();
};
    void patient ::alldata()
    {
        ifstream fin;
        fin.open("patent.txt",ios::in);
        char ch;
        ch=fin.get();
        while(!fin.eof())
        {
            cout<<ch;

        ch=fin.get();


        }
    }

int main()
{

    patient y;
    y.alldata();
    return 0;
}
