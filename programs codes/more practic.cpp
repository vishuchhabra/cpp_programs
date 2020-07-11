#include<iostream>
using namespace std;
class TWO;
class ONE
{

public:
void fun(TWO two)
{

    two.value=10;
    cout<<two.value<<endl;
}
};
class TWO
{

private:
    int value;
public:
    friend void ONE::fun(TWO);
};

int main()
{

    ONE one;
    TWO two;
    one.fun(two);;
    return 0;
}
