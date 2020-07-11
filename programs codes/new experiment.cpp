#include<iostream>
using namespace std;
class vishu
{
public:
string  title;
string author;
int pages;

    vishu(string  d,string  t,int e)
    {

       title=d;
       author=t;
        pages=e;
    }

};
class reetu :public vishu
{
public:
    int bsold;
public:
    reetu(int d):vishu ("journey to the new world","vishu chhabra ",556)
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
