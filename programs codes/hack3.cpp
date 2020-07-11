#include<iostream>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int p=n[0]-'0';
    int q=n[1]-'0';

    int h=(p*10)+q;
       cout<<h;
    return 0;
}
