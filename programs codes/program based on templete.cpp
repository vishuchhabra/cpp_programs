//important program based on  template class in whuch we have make the class templete
#include<iostream>
using namespace std;
template <class x>//making class template
class vishu
{
    private:
    struct reetu
    {
     int capacity;
     x *arr;

    };
    reetu *p;
    public:
        vishu(int capacity)
        {
            p=new reetu;
            p->capacity=capacity;
            p->arr=new x [capacity];

        }
        void setd()
        {
            int i;
            cout<<"enter your "<<p->capacity<<" numbers"<<endl;
            for(i=0;i<=p->capacity-1;i++)
            {
                cin>>p->arr[i];
            }
        }
        void show()
        {
            cout<<"yours numbers are following as "<<endl;
            for(int y=0;y<=p->capacity-1;y++)
            {
                cout<<p->arr[y]<<endl;
            }
        }

};

int main()
{

    vishu <float>t(4);
    t.setd();
    t.show();
    vishu <int>p(5);
    p.setd();
    p.show();

    return 0;
}

