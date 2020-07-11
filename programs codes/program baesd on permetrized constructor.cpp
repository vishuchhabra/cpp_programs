#include<iostream>
using namespace std;
class vishu
{
public:
char title[20];
char author[20];
int pages;

    vishu(char d[20],char t[20],int e)
    {

        for(int p=0;p<20;p++)
        {

            title[p]=d[p];
            author[p]=t[p];

        }
        pages=e;
    }

};
class reetu :public vishu
{
public:
    int bsold;
public:
    reetu(int d):vishu ("Story of Rama","vishu",556)
    {

        bsold=d;
    }
void display()
{

    cout<<"title of the book is following as "<<endl<<title<<endl<<endl<<"author name is following as "<<endl<<author<<endl<<endl<<"number of the pages in the book is following as"<<endl<<pages<<endl;
    cout<<endl<<"number of the books sold is following as"<<endl<<bsold<<endl;
}
}
;
int main()

{
    reetu f(534);
f.display();
    return 0;

}
