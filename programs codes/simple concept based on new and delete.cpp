#include<iostream>
using namespace std;
int main()
{
    int r;
   // int *p=new int(56);

//p=6;
int *p;
p=new int ;//oth are same cases
//also we can write p=new int(67);
*p=67;//again it become variable where  p is address and *p became variable
    cout<<"values are following as"<<endl<<*p<<"\n";
    *p=78;
    cout<<"again value is following as"<<"\n"<<*p<<endl;

    delete p;//we should use delete variable to delete the dynamic alloted memory(dma)
//cout<<*p;//it will not in working ondition when we have used delete p;
*p=89;
cout<<"value is following as "<<endl<<*p<<endl;
r=7;
p=&r;
cout<<*p;
    return 0;

}
