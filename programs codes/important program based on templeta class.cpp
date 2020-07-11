#include<iostream>
using namespace std;
class arrayc

{

private:
    struct vishu
    {

        int capacity;
        int *arr;

    };
    vishu *s;
public:
    arrayc(int capacity)
    {
        s=new vishu;//this staement is necessery for this program
      s->capacity=capacity;
     s-> arr =new int  [s->capacity];

    }
    void add()

    {

        s->arr[0]=3;
        s->arr[1]=56;
        s->arr[2]=67;
    }
    void show()
    {

        cout<<endl<<s->arr[0]<<endl<<s->arr[1]<<endl<<s->arr[2]<<endl;

    }


};
int main()
{

    arrayc c(3);
    c.add();
    c.show();
        return 0;
}
