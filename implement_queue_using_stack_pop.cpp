#include<iostream>
#include<stack>
using namespace std;
class  stac
{
public:
    stack <int> s1 ,s2;
void push1(int x)
{
  s1.push(x);

}
void pop1()
{
    if(s1.empty())
    {
        cout<<"No. element"<<endl;
        return;
    }
    while(s1.size()!=1)
    {
        s2.push(s1.top());
        s1.pop();

    }
    cout<<"element:"<<s1.top()<<endl;
    s1.pop();
    while(!s2.empty())
    {

        s1.push(s2.top());
        s2.pop();
    }
}

};
int main()
{
    stac t;
    cout<<"1.push\n2.pop"<<endl;
    while(1)
    {

        int n;
        cin>>n;
        switch(n)
        {

        case 1:
            int ele;
            cout<<"element:";
            cin>>ele;
            t.push1(ele);
            break;
        case 2:
            t.pop1();
            break;
        }
    }
    return 0;


}




